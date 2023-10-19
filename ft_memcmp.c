/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:49:57 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/19 14:27:24 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *src;
	unsigned const char *dest;

	src = (unsigned const char *) s1;
	dest =(unsigned const char *) s2;
	while (n--)
	{
		if (*src != *dest)
			return (*src - *dest);
		src++;
		dest++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	size_t n = 5;
	char tab[50] = "45";
	char tab2[21] = "455";
	printf("Pas moi:\n%d",memcmp(tab, tab2, n));
	printf("\n");
	printf("Moi:\n%d", ft_memcmp(tab, tab2, n));
}