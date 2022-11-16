/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:30 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:43:08 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_memset given a malloced address s, a unsigned char c and a len n
 *	it sets n bites of s to c
 * */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = s;
	i = -1;
	while (++i < n)
		*(aux + i) = c;
	return (s);
}
