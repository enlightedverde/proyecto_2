/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:59 by valonso           #+#    #+#             */
/*   Updated: 2021/11/04 01:11:38 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	ft_isprint return 1 if the character c is a printable character
 *	otherwise returns 0
 * */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
