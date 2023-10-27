/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:29:32 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/27 17:28:25 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *p;
	int i;
	int j;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	p = (char *)malloc(j - i + 2); // +2 pour le caractère nul '\0'
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1 + i, j - i + 2);
	return (p);
}

/* #include <stdio.h>

int main()
{
	const char *s1 = "poulet roti";
	const char *set = "ibo";
	printf("%s", ft_strtrim(s1, set));
} */