/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 20:13:10 by valonso           #+#    #+#             */
/*   Updated: 2022/11/13 11:32:48 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/get_next_line.h"

static void	gnl_get_lens(char *s, int *len, int *jump)
{
	*len = 0;
	*jump = -1;
	if (!s)
		return ;
	while (s[*len])
	{
		if (*jump == -1 && s[*len] == '\n')
			*jump = *len;
		(*len)++;
	}
}

static void	gnl_copystr(char *dst, char *src, int n)
{
	int	i;

	if (!dst || !src || n < 1)
		return ;
	i = -1;
	while (++i < n)
		dst[i] = src[i];
	dst[i] = 0;
}

static void	gnl_append(char *mem[MAX_N_FD], int fd, \
			char buffer[BUFFER_SIZE], int read_size)
{
	char	*aux;
	int		len;
	int		jump;

	gnl_get_lens(mem[fd], &len, &jump);
	aux = malloc(len + read_size + 1);
	if (mem[fd])
		gnl_copystr(aux, mem[fd], len);
	gnl_copystr(aux + len, buffer, read_size);
	if (mem[fd])
		free(mem[fd]);
	mem[fd] = aux;
}

static char	*gnl_next_line(char *mem[MAX_N_FD], int fd)
{
	int		i;
	int		mem_size;
	char	*line;
	char	*aux;

	gnl_get_lens(mem[fd], &mem_size, &i);
	if (i == -1 || i == mem_size - 1)
	{
		line = malloc(mem_size + 1);
		gnl_copystr(line, mem[fd], mem_size);
		free(mem[fd]);
		mem[fd] = NULL;
	}
	else
	{
		line = malloc(i + 2);
		aux = malloc(mem_size - i + 1);
		gnl_copystr(aux, mem[fd] + i + 1, mem_size - i);
		gnl_copystr(line, mem[fd], i + 1);
		free(mem[fd]);
		mem[fd] = aux;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*mem[MAX_N_FD];
	char		buffer[BUFFER_SIZE];
	int			read_size;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, NULL, 0) == -1)
		return (NULL);
	read_size = read(fd, buffer, BUFFER_SIZE);
	while (read_size)
	{
		gnl_append(mem, fd, buffer, read_size);
		gnl_get_lens(mem[fd], &i, &read_size);
		if (read_size != -1)
			break ;
		read_size = read(fd, buffer, BUFFER_SIZE);
	}
	if (!mem[fd])
		return (NULL);
	return (gnl_next_line(mem, fd));
}
