/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:01:23 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:20:38 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memmove_aux_back(void *dest, const void *src, size_t len)
{
	while (len--)
		((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
}


static void	memmove_aux_front(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
}

/*	Save
 *	ft_memmove given a malloced address dest and a src adrress it copies
 *	n bites from dst to src
 *	if len  is 0 or dest is src does nothing
 * */

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!len || dest == src)
		return (dest);
	if (dest > src)
		memmove_aux_back(dest, src, len);
	else
		memmove_aux_front(dest, src, len);
	return (dest);
}
