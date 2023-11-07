/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:56 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/07 16:52:24 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t	head;
	size_t	tail;
	int		i;

	p = (char **) malloc((sizeof(char *) * count_words(s, c) + 1));
	if (!p || !s)
		return (NULL);
	head = 0;
	tail = 0;
	i = 0;
	while (nb_words > i)
	{
		while (*s == c && *s)
		{
			tail++;
			head++;
			s++;
		}
		while (*s != c && *s)
		{
			head++;
			s++;
		}
		p[i++] = ft_substr(s - head, tail, head - tail);
		tail = head;
	}
	p[i] = NULL;
	return (p);
}

/* int main()
{
	char *tab = "";
	char **split;
	char del = 'z';
	int	i = 0;
	split = ft_split(tab, del);
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]); 
		i++;
	}
} */
