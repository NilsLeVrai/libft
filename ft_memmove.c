/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:21:24 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/31 14:14:22 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	unsigned const char	*src_ptr;

	dest_ptr = (unsigned char*) dest;
	src_ptr = (unsigned const char*) src;
	/*if (dest_ptr == src_ptr)
		return (dest_ptr);*/
	if (dest_ptr <= src_ptr)
		ft_memcpy(dest_ptr, src_ptr, n);
	else if (dest_ptr > src_ptr)
	{
		while (n--)
			dest_ptr[n] = src_ptr[n];	
	}
	return (dest_ptr);
}
/*
#include <stdio.h>
#include <string.h>

int main () 
{
   char dest[] = "ab";
   //123456
   //abcdfgh
   const char src[]  = "1234567";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 3);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
