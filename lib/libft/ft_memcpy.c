/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:18 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 20:16:04 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	UNSAVED ?????
 *	ft_memcpy 
 * */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (n == 0 || dest == src)
		return (dest);
	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
