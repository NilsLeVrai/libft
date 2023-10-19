/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:21:24 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/19 14:17:44 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	
	dest_ptr = dest;
	src_ptr = src;
	if (dest > src)
		while (n--)
			*dest_ptr = *src_ptr;
	return (dest);
}
int	main()
{
	size_t n = 0;
	char dest[100] = "Ninho featuring Gazo Ninho featuring Gazo Ninho featuring Gazo";
	char src[100] = "Juste Ninho";
	memmove(dest, src, n);
	printf("Pas moi:\n%s",dest);
	printf("\n");
	ft_memmove(dest, src, n);
	printf("Moi:\n%s",dest);
}