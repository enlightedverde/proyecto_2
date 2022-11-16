/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:15:52 by valonso           #+#    #+#             */
/*   Updated: 2021/11/03 20:15:54 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_lstadd_front puts in the first position of lst a new node new
 * */

void	ft_lstadd_front(t_list **lst, t_list *nuw)
{
	nuw->next = *lst;
	*lst = nuw;
}
