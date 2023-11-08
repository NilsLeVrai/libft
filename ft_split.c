/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:56 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/08 17:34:29 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

/*static void	afficher_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("free(tab[%d])= %s\n", i, tab[i]);
		i++;
	}
	printf("i=%d\n", i);
}
*/

static int	count_words(char const *s, char c)
{
	size_t	words;
	int		is_del;

	words = 0;
	is_del = 0;
	while (*s)
	{
		if (*s != c && is_del == 0)
		{
			is_del = 1;
			words++;
		}
		else if (*s == c)
			is_del = 0;
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**p;
	size_t	len_sub;
	int		i;
	char	*s2;

	nb_words = count_words(s, c);
	p = (char **) ft_calloc((nb_words + 1), sizeof(char *));
	if (!p || !s)
		return (NULL);
	i = 0;
	while (nb_words > i)
	{
		len_sub = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len_sub++;
			s++;
		}
		s2 = ft_substr(s - len_sub, 0, len_sub);
//		printf("oui: %s\n",s2);
		if (!s2)
			free_tab(p);
// afficher_tab(p);
		p[i++] = s2;
	}
	p[i] = NULL;
	return (p);
}
/*
int main()
{
	char *tab = "sal ,utzz,t,,,oi";
	char **split;
	char del = ',';
	int	i = 0;
	split = ft_split(tab, del);
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]); 
		i++;
	}
}*/
