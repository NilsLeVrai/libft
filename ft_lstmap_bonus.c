/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:47:50 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/08 12:11:44 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newvar;

	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		newvar = ft_lstnew((*f)(lst->content));
		if (!newvar)
		{
			ft_lstclear(&newlst, (*del));
			break ;
		}
		ft_lstadd_back(&newlst, newvar);
		lst = lst->next;
	}
	return (newlst);
}
