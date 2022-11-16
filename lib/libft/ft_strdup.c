/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:38 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:31:53 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_strdump given a cstring it returns a malloced cstring that is a copy of s
 * */

char	*ft_strdup(const char *s)
{
	char	*r;
	char	*aux;

	r = malloc(ft_strlen(s) + 1);
	if (!r)
		return (0);
	aux = r;
	while (*s)
	{
		*aux = *s++;
		aux++;
	}
	*aux = 0;
	return (r);
}
