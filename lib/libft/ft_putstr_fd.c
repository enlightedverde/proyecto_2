/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:33 by valonso           #+#    #+#             */
/*   Updated: 2022/05/13 03:38:50 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_putchar_fd put the given c-string s in the output of the fd
 *	if s is NULL or fd is 0 does nothing
 * */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}
