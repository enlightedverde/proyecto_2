/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:04 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 20:53:46 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if (!s)
		return (0);
	if (ft_strlen(s) < start || s[0] == 0)
	{
		d = malloc(1);
		if (!d)
			return (0);
		d[0] = 0;
		return (d);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	d = malloc(++len);
	if (!d)
		return (0);
	ft_strlcpy(d, s + start, len);
	return (d);
}
