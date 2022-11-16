/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:16 by valonso           #+#    #+#             */
/*   Updated: 2022/05/18 14:04:37 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * zero_aux mallocs a c string contain the ascii '0' and returns it
 * */

static char	*zero_aux(void)
{
	char	*s;

	s = malloc(2);
	if (!s)
		return (0);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

static char	*nbr_aux(long int i, long int nbr, long int k, long int minus)
{
	char	*s;

	s = malloc(i + minus);
	if (!s)
		return (0);
	i = 0;
	if (minus)
		s[i++] = '-';
	k /= 10;
	while (k)
	{
		s[i++] = nbr / k + '0';
		nbr %= k;
		k /= 10;
	}
	s[i] = 0;
	return (s);
}

/*
 *	ft_itoa malloc a c string that contains the digits (and sign if negative) of the gicen number n 
 * */

char	*ft_itoa(int n)
{
	long int	nbr;
	long int	i;
	long int	k;
	long int	minus;

	nbr = n;
	minus = 0;
	if (!n)
		return (zero_aux());
	if (nbr < 0)
	{
		minus = 1;
		nbr = -nbr;
	}
	i = 1;
	k = 1;
	while (nbr / k)
	{
		k *= 10;
		i++;
	}
	return (nbr_aux(i, nbr, k, minus));
}
