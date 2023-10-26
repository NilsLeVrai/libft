/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:03:26 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/26 14:12:01 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int ft_size_malloc(int nb, char **strs, char *sep)
{
    int i;
    int malloclen;

    i = 0;
    malloclen = 0;
    while (i < nb)
    {
        malloclen += ft_strlen(strs[i]);
        i++;
    }
    malloclen += ft_strlen(sep) * (nb - 1);
    return (malloclen + 1);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *mallocrane;
    int     ballec;
    int     i;

    i = 0;
    ballec = ft_size_malloc(size, s1, s2);
    if (!s1 || !s2)
        return (NULL);
    if (size == 0)
    {
        mallocrane = (char *) malloc (1 * sizeof(char));
        mallocrane[0] = '\0';
        return (mallocrane);
    }
    mallocrane = (char *) malloc (ballec * sizeof(char));
    while (i < size)
    {
        ft_strcat(mallocrane, strs[i]);
        if (i < size - 1)
            ft_strcat(mallocrane, sep);
        i++;
    }
    mallocrane[ballec - 1] = '\0';
    return (mallocrane);
} */