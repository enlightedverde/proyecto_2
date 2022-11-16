/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:15:57 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:02:09 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *
 *	ft_lstclear deletes all the contents with de funtion del of a iven list
 *	if one of the arguments dont exist do nothing
 *
 * */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*ne;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		ne = *lst;
		*lst = (*lst)->next;
		free(ne);
	}
}
