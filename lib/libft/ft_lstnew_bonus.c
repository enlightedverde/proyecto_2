/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valonso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:16:23 by valonso           #+#    #+#             */
/*   Updated: 2021/11/11 19:20:03 by valonso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	ft_lstnew returns the address of a malloced t_list,
 *	the content of p is equal to the given void pointer content
 *	and next of p is NULL
 *	if the malloc fails returns NULL
 * */

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = malloc(16);
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
