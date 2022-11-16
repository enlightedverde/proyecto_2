/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:25 by valonso           #+#    #+#             */
/*   Updated: 2022/05/18 13:17:04 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	Reserva memoria para un numero de elementos ( nmeb ) del tamaño dado ( size ), 
	y inicializa esos bites a 0.

*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;

	d = malloc(size * nmemb);
	if (!d)
		return (0);
	ft_memset(d, 0, size * nmemb);
	return (d);
}
