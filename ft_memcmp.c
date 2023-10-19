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

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *s1_ptr;
	const char *s2_ptr;
	unsigned int i;

	s1_ptr = (char*) s1;
	s2_ptr = (char*) s2;
	i = 0;
	while (n--)
	{
		if (s1_ptr[i] != s2_ptr[i])
			i++;
	}
	return (s1_ptr[i]  - s2_ptr[i]);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	size_t n = 4;
	char tab[30] = "YannsYannsYanns";
	char tab2[22] = "Yans";
	printf("Pas moi:\n%d",memcmp(tab, tab2, n));
	printf("\n");
	printf("Moi:\n%d", ft_memcmp(tab, tab2, n));
}