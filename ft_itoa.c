/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:23:33 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/02 14:49:01 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	malloc_size(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
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


char	*ft_itoa_neg(int n)
{
	char	*tab;
	int		i;
	int		len;
	int		base;
	long	nb;

	i = 0;
	nb = n;
	len = malloc_size(n);
	base = power(len - 1);
	tab = (char *) malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
		i++;
	}
	while (i <= len)
	{
		tab[i++] = ((nb / base) + '0');
		nb %= base;
		base /= 10;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_itoa(int n)



#include <stdio.h>
// taille buffer
//nb / 10 + '0'
//-2147483648
//2147483647  
int main ()
{
	int	nb = 15;
	printf("%s", ft_itoa(nb));
}