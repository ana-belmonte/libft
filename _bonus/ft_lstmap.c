/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:14:02 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/06 18:37:35 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*newnode;
	t_list	*newnext;
	t_list	*newlist;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!(newnode))
		return (NULL);
	newnode->content = f(lst->content);
	newlist = newnode;
	lst = lst->next;
	while (lst)
	{
		newnext = (t_list *)malloc(sizeof(t_list));
		if (!newnext)
		{
			ft_lstclear(newlist, del);
			return (NULL);
		}
		newnext->content = f(lst->content);
		newnext->next = newnext;
		newnode = newlist;
	}
	newnode->0
	return (newlist);
}
