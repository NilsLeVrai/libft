/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:23 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/26 13:38:50 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	len_to_find;

	i = 0;
	len_to_find = ft_strlen(little);
	if (*little  == '\0' || !little )
		return ((char *)big);
	while (i < n)
	{
		if (ft_strncmp(&big[i], &little[i], len_to_find) == 0 && little [i] != '\0')
			return((char *)big);
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
