/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:44:48 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/18 15:34:08 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/* void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t 		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	dest_ptr = dest;
	src_ptr = src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest_ptr);
} */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	while (n--)
	{
		*dest_ptr= *src_ptr;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	size_t n = 4;
	char tab[10] = "Yanns";
	char tab2[22] = "ClicClicClicPanPanPan";
	memcpy(tab, tab2, n);
	printf("Pas moi:\n%s",tab);
	printf("\n");
	ft_memcpy(tab, tab2, n);
	printf("Moi:\n%s",tab);
}