/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:56:17 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/23 10:49:04 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char *char1;
	unsigned char *char2;

	if (!s1 || !s2)
		return 0;
	char1 = (unsigned char*) s1;
	char2 = (unsigned char*) s2; 
	i = 0;
	if (i == n)
		return (0);
	while (n--)
	{
		if (char1[i] != char2[i])
			return (char1[i] - char2[i]);
		else if (char1[i] == '\0' || char2[i] == '\0')
			return (char1[i] - char2[i]);
		i++;
	}
	return (0);
}
