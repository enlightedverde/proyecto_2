/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:54 by valonso           #+#    #+#             */
/*   Updated: 2021/11/04 01:01:57 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	ft_isdigit returns 1 if the character c is a numeric character
 *	otherwise returns 0
 * */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
