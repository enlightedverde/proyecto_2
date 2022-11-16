/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:34 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:29:48 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strchr given and cstring and a character c it returns the address of the first character of s
 * that is equal to c, otherwise it returns 0
 * */

char	*ft_strchr(const char *s, int c)
{
	c %= 256;
	if (!c)
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if ((int) *s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}
