/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:23:33 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/23 15:23:48 by niabraha         ###   ########.fr       */
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

int	power(int power)
{
	int	i;
	int	nb;	

	i = 0;
	nb = 1;
	while (i < power)
	{
		nb *= 10;
		i++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char *tab;
	int		i;
	int len = malloc_size(n);
	int base;

	i = 0;
	base = power(len - 1);
	tab = (char *) malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (n > 0)
	{
		tab[i++] = ((n / base) + '0');
		n %= base;
		base /= 10;
	}
	tab[i] = '\0';
	return (tab);
} 

int main()
{
	int		i;

	i = 2147;
	printf("%s", ft_itoa(i));
}