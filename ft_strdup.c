/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:41 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/19 10:47:08 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*p;
	int		compteur;

	compteur = 0;
	p = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!p)
		return (NULL);
	while (*src)
		p[compteur++] = *src++;
	p[compteur] = '\0';
	return (p);
}