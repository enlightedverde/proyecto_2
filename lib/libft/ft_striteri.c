/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:06:46 by valonso           #+#    #+#             */
/*   Updated: 2022/06/24 11:33:51 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	ft_striteri given a char s, and a funtion f that takes for parameters an unsigned integer
 *	and the address of a character, it applies the funtion f to all the chars of s with his indexs as first parameter
 * */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!f || !s)
		return ;
	i = -1;
	while (s[++i])
		f(i, s + i);
}
