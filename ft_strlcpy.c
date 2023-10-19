/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:56:16 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/19 10:29:47 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	(*dst) = '\0';
	return (src);
}

int main ()
{
	size_t n = 6;
	char tab[30] = "YannsYannsYanns";
	char tab2[22] = "Clic";
	ft_strlcpy(tab, tab2, n);
	printf("Pas moi:\n%s",tab);
}
