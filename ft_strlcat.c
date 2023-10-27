/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:34:07 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/27 17:26:20 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t  i;
    size_t  j;
    size_t  len_dst;
    size_t  len_src;

    i = 0;
    j = 0;
    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    while (dest[i] != '\0' && n > i)
        i++;
    while (src[j] != '\0' (n - len_dst - 1))
}*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char *char1;
	unsigned char *char2;

	if (!s1 || !s2)
		return (0);
	char1 = (unsigned char*) s1;
	char2 = (unsigned char*) s2; 
	i = 0;
	if (n == 0)
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

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include <string.h>
#include <stdio.h>

size_t strlcat(char *dest, const char *src, size_t size) 
{
    size_t dest_len;
    size_t src_len;
    size_t  total_length;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    total_length = size - dest_len - 1;

    if (size <= dest_len)
        return (dest_len + src_len);
    ft_strncmp(dest, src, total_length);
    return (dest_len + src_len);
}

/* int main() {
    char destination[20] = "Hello, ";
    const char* source = "World!";
    size_t buffer_size = sizeof(destination);

    printf("Before strlcat: %s\n", destination);

    size_t result = strlcat(destination, source, buffer_size);

    printf("After strlcat: %s\n", destination);
    printf("Resulting string length: %zu\n", result);

    return 0;
} */