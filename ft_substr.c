/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:19:29 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/31 16:15:29 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	size_t	malloc_len;
	char	*p;

	len_s = ft_strlen(s);
	if (start >= len_s || *s == '\0')
		return (NULL);
	if (len_s - start > len)
		malloc_len = len;
	else if (len_s - start < len)
		malloc_len = len_s - start;
	p = (char *) malloc(sizeof(char) * (malloc_len + 1));
	if (!p)
		return (NULL);
	while (malloc_len > i)
	{
		p[i] = s[start + i];
		i++;
	}
	p[malloc_len] = '\0';
	return (p);
}
/*
src = Salut cest ninho; 16
start = 7;
len ;9
res: cest ninho; 9

int main()
{
    char s[] = "Salut c'est Ninho";
 	int start = 3;
    int len = 10;
 
    char* dest = ft_substr(s, start, len);
 
    printf("%s\n", dest);
 
    return 0;
}*/
