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

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	unsigned const char*	bigmac;
	unsigned const char*	stuart_little;
	n = 3;

	if (*little  == '\0')
		return (*big);
	while ()
	// tant que n inferieur n
	// strncmp
	return (0);
		//si little pas trouve dans big --> NULL
		//sinon pointeur 	
}
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	
	ptr = strnstr(largestring, smallstring, 6);
	printf("Pas moi :(\n%s", ptr);
	ptr = ft_strnstr(largestring, smallstring, 6);
	printf("Moi :(\n%s", ptr);
}

