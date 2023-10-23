/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:23:33 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/23 12:57:28 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	malloc_size(int n)
{
	int i;

	i = 0;
	while(n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int     ft_recursive_power(int power)
{
        if (power >= 2)
        	return (10 * ft_recursive_power(power - 1));
        return (0);
}

char	*ft_itoa(int n)
{
	char *tab;
	int		i;
	int len;

	i = 0;
	len = malloc_size(n);
	tab = (char *) malloc(sizeof(char) * (malloc_size(n) + 1));
	/* if (!tab)
		return (NULL); */
	while (n > 0)
	{
		tab[i++] = ((n % ft_recursive_power(len)) + '0');
		n /= 10;
		len--;
	}
	tab[i] = '\0';
	return (tab);
} 

int main()
{
	int		i;

	i = 44545;
	printf("%s", ft_itoa(i));
}