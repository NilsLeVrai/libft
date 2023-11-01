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
	size_t	malloc_len;
	size_t	i;
	char	*p;

	malloc_len = len - start;
	i = start;
	printf("%ld", i);
	p = (char *) malloc(sizeof(char) * (malloc_len + 1));
	while (len > start && *(s + i) != '\0')
	{
		*p = *(s + i);
		i++;
		p++;
	}
	*p = '\0';
	return (p - malloc_len);
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
