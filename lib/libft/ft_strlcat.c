/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 14:26:50 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:37:37 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	
 * */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = 0;
	if (size < len_dest + 1)
		return (len_src + size);
	while (i < size - len_dest - 1 && src[i] != '\0')
	{
		dest[len_dest + i] = (char) src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_src + len_dest);
}
