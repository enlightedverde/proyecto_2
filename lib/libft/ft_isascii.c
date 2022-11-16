/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:50 by valonso           #+#    #+#             */
/*   Updated: 2021/11/04 01:16:20 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_isascii returns 1 if the character c belongs to unextended ascii table
 * otherwise returns 0
 * */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
