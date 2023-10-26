/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:21:24 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/26 14:50:34 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	
	dest_ptr = dest;
	src_ptr = src;
	if (src == dest)
		return (dest);
	if (src > dest)
		ft_memcpy(dest, src, n);
	while (n--)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	return (dest);
}
// The  memmove()  function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes
//are then copied from the temporary array to dest.