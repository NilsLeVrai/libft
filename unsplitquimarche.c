/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsplitquimarche.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:56 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/09 12:57:05 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n--)
	{
		*str = '\0';
		str++;
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (nmemb * size));
	return (memory);
}

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

static char	*fill_tab(char const *tab, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (tab[len] && tab[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (tab[len] && tab[len] != c)
	{
		word[len] = tab[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

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
	char	**p;
	size_t	len_sub;
	int		i;

	p = (char **) ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!p || !s)
		return (NULL);
	i = 0;
	while (count_words(s, c) > i)
	{
		len_sub = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len_sub++;
			s++;
		}
		p[i++] = fill_tab(s - len_sub, c);
		if (!p)
			return(free_tab(p));
	}
	p[i] = NULL;
	return (p);
}

int main()
{
	char *tab = "a,a,a,a";
	char **split;
	char del = ',';
	int	i = 0;
	split = ft_split(tab, del);
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]); 
		i++;
	}
}