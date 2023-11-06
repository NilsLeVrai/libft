/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:28:16 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/06 13:49:50 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*var;
	t_list	*i;

	if (!lst)
		return (NULL);
	while (var != NULL && var->next != NULL)
		var->next;
	if (var != NULL)
		var->next;
	return (var);
}
