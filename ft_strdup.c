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

char	*strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *) malloc(sizeof(char)* (ft_strlen(s) + 1));
	if (!p)
		return (NULL);
	ft_strcpy(p, s);
	p[i] = '\0';
	return (p);
}