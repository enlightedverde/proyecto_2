/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:18 by valonso           #+#    #+#             */
/*   Updated: 2022/05/17 12:06:14 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Set a memory address ( s ) and a number ( n )
 *	of bites, set all of then to 0.
 * */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
