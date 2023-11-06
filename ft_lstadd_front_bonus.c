/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:27:06 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/03 11:52:55 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}

/* typedef struct s_list
{
	void			*content; // La donnée contenue dans le maillon
	struct s_list	*next; // L’adresse du maillon suivant de la liste
}	t_list; */ //NULL si le maillon suivant est le