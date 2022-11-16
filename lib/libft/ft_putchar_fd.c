/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:21 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:24:26 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_putchar_fd put the given char c in the output of the fd
 * */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
