/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:19:29 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/02 14:30:13 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*p;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return(ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
    	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return NULL;
	while (s[start] && i < len) 
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int main()
{
    char s[] = "Salut c'est Ninho";
 	int start = 123;
    int len = 15;
 
    char* dest = ft_substr(s, start, len);
 
    printf("%s\n", dest);
 
    return 0;
}*/
