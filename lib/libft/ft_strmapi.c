/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:55 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:30:09 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	if (!s || !f)
		return (0);
	out = malloc(ft_strlen(s) + 1);
	if (!out)
		return (0);
	ft_strlcpy(out, s, ft_strlen(s) + 1);
	i = -1;
	while (out[++i])
		out[i] = f(i, out[i]);
	return (out);
}
