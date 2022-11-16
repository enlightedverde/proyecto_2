/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:00 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:33:18 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	front(const char *s, const char *set)
{
	size_t	set_len;
	size_t	i;

	i = -1;
	set_len = ft_strlen(set);
	while (++i < set_len)
	{
		if (s[0] == set[i])
			return (front(s + 1, set) + 1);
	}
	return (0);
}

static size_t	end(const char *s, const char *set, size_t s_len)
{
	size_t	set_len;
	size_t	i;

	i = -1;
	set_len = ft_strlen(set);
	while (++i < set_len)
	{
		if (s[s_len - 1] == set[i])
			return (end(s, set, s_len - 1) + 1);
	}
	return (0);
}

char	*empty(void)
{
	char	*out;

	out = malloc(1);
	if (!out)
		return (0);
	out[0] = '\0';
	return (out);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	finish;
	size_t	i;
	char	*out;
	size_t	out_len;

	if (!s1 || !set)
		return (0);
	start = front(s1, set);
	if (start == ft_strlen(s1))
		return (empty());
	finish = end(s1, set, ft_strlen(s1));
	out_len = ft_strlen(s1) - start - finish;
	out = malloc(out_len + 1);
	if (!out)
		return (0);
	i = -1;
	while (++i < out_len)
		out[i] = s1[start + i];
	out[i] = '\0';
	return (out);
}
