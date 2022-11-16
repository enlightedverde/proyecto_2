/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:51 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:36:16 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_strjoin given two cstrings s1, s2 it returns the address of a malloced
 *	cstring that contains s1 and s2
 *	if s1 or s2 are NULL or the malloc fails, it returns 0
 * */

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*r;
	size_t	s1_len;	
	size_t	s2_len;	

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	r = malloc(s1_len + s2_len + 1);
	if (!r)
		return (0);
	ft_strlcpy(r, s1, s1_len + 1);
	ft_strlcpy(r + s1_len, s2, s2_len + 1);
	return (r);
}
