/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:14 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:42:36 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_memcmp given to addreses it compares them bit a bit for a len of n
 *	if equal returns 0
 *	else returns the difference bettwen the first different bites
 * */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i])
			break;
	}
	return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}
