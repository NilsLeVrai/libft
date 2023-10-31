/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:23 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/31 14:09:24 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(little);
	if (*little == '\0' || !little)
		return ((char *)big);
	while (i < n)
	{
		if (ft_strncmp(&big[i], &little[i], len) == 0 && little [i] != '\0')
			return ((char *)little);
		i++;
	}
	return (NULL);
}
 */
