/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:02:01 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:47:28 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;
	size_t	haystack_len;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = -1;
	haystack_len = ft_strlen(haystack);
	while (haystack[++i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] \
					&& j + i < haystack_len && j + i < len)
				j++;
			if (!needle[j])
				return ((char *) haystack + i);
		}
	}
	return (0);
}
