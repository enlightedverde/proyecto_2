/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:00:45 by valonso           #+#    #+#             */
/*   Updated: 2021/11/04 00:25:50 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * ft_isalpha returns 1 if the charater c is an alfhbatic character
 * otherwise returns 0
 *
 * */

int	ft_isalpha(int c)
{
	if (c < 65 || c > 122 || (c > 90 && c < 97))
		return (0);
	return (1);
}
