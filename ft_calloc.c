/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:23:07 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/20 16:05:15 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	int		compteur;

	compteur = 0;
	p = (char *) malloc(sizeof(char) * (ft_strlen(nmemb) + 1));
	if (!p)
		return (NULL);
	while (*src)
		p[compteur++] = *src++;
	p[compteur] = '\0';
	return (p);
}
