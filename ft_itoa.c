/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:23:33 by niabraha          #+#    #+#             */
/*   Updated: 2023/11/02 11:47:57 by niabraha         ###   ########.fr       */
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

char *itoa_neg(long nb)
{
	char	*p;
	int		buffer_size;
	int		i;

	buffer_size = malloc_size(nb) + 1;
	p = (char *) malloc (sizeof(char) * buffer_size + 1);
	i = 1;
	if (!p)
		return (NULL);
	p[0] = '-';
	while (i <= buffer_size)
	{
		p[i++] = nb / 10 + '0';
		nb %= 10;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	long 	nb;
	char *p;

	nb = n;
	if (nb < 0)
	{
		p = (itoa_neg(nb));
	}	
	return (p);
}
#include <stdio.h>
// taille buffer
//nb / 10 + '0'
int main ()
{
	int	nb = -645;
	printf("%s", ft_itoa(nb));
}