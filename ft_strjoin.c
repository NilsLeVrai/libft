/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:03:26 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/31 15:49:14 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (n < len_dest)
		len_src += n;
	else
		len_src += len_dest;
	while (n > len_dest + 1 && src[i])
	{
		dst[len_dest] = src[i];
		len_dest++;
		i++;
	}
	if (n >= len_dest)
		dst[len_dest] = '\0';
	return (len_src);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char 	*p;
	
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	p = (char *) malloc (sizeof(char) * (size_s1 + size_s2 + 1 ));
	if (!p)
		return (NULL);
	ft_strlcat(p, s1, size_s1 + 1);
	ft_strlcat(p, s2, size_s2 + 1);
	p[size_s2] = '\0';
	return (p);
}

int main ()
{
	char *a = "oui";
	char *b = "non";
	printf("%s", ft_strjoin(a, b));
} */