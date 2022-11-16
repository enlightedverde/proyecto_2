/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:16:20 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 20:12:53 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_lstmap returns a new t_lst out whos content is
 *	copy of the t_lst lst but the content of each node
 *	has been procesed by the funtion f
 *
 *	if f or lst are NULL returns NULL
 *
 *	if ft_lstnew fails to malloc it deletes all the previus nodes
 *	and contents with funtion f and continues creating a new t_lst out 
 *	with the next node of the t_lsit lst
 * */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*out;
	t_list	*aux;

	if (!f || !lst)
		return (0);
	out = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
			ft_lstclear(&out, del);
		ft_lstadd_back(&out, aux);
		lst = lst->next;
	}
	return (out);
}
