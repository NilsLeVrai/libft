/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:44:48 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/19 14:05:59 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
	size_t n = 0;
	char dest[20] = "\0";
	char src[50] = "\0";
	ft_memcpy(dest, src, n);
	printf("Pas moi:\n%s",dest);
	printf("\n");
	memcpy(dest, src, n);
	printf("Moi:\n%s",dest);
}