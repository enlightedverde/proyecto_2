/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:08 by valonso           #+#    #+#             */
/*   Updated: 2022/05/13 04:09:17 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

Dada una direcion de memoria ( *s ), un caracter ( c ) 
y un tamaño ( n ), la funcion ft_memchr
devuleve la direccion de memoria ( aux + i ) 
del primer slot que contenga el caracter dado ( c ).

Given a memory address ( *s ), a characer ( c ) 
and a size ( n ), the function ft_memchr
returns de memory address ( aux + i ) 
of the first slot that content the given character ( c ).

*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	i = -1;
	aux = (unsigned char *) s;
	while (++i < n)
	{
		if (aux[i] == (unsigned char) c)
			return (aux + i);
	}
	return (0);
}
