/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:59:17 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:37:51 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' \
			|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

/*
 *	Take a string as argument ( str ), will ignore 
 *	all the spaces int the begining of the string, 
 *	take or not a sign of the number and the digits of that numbers
 *	End when the next cahr of string is not a digit
 * */

int	ft_atoi(const char *str)
{
	long int	n;
	long int	minus;

	n = 0;
	minus = 1;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			minus = -1;
	}
	while (ft_isdigit(*str))
		n = n * 10 + *str++ - '0';
	return (minus * n);
}
