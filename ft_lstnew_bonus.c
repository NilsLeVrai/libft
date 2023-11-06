/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:54:21 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/06 14:14:07 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstnew(void	*content)
{
	t_list	*p;

	p = malloc(sizeof (p));
	p->content = content;
	p->next = NULL;
	return (p);
}