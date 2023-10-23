/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:23 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/23 11:10:37 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;

	i = 0;
	if (*little  == '\0' || !little )
		return ((char *)big);
	while (i < n)
	{
		if (strncmp(&big[i], &little[i], n) == 0 && little [i] != '\0')
		{
			return((char *)little);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	const char *largestring = "FBar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	
	//ptr = strnstr(largestring, smallstring, 6);
	//printf("Pas moi :(\n%s", ptr);
	ptr = ft_strnstr(largestring, smallstring, 8);
	printf("Moi :(\n%s", ptr);
}
