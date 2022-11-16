/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:29 by valonso           #+#    #+#             */
/*   Updated: 2022/05/13 03:36:04 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_putnbr_fd put the digits (and sign if n < 0) of the given number n in the
 *	output of the given fd
 * */

void	ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
	free(s);
}
