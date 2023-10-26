/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:23:33 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/26 12:47:36 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	malloc_size(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while(n != 0)
		{
			n /= 10;
			i++;
		}	
	}
	if (n < 0)
	{
		while(n != 0)
		{
			n /= 10;
			i++;
		}	
	}
	else
		return (1);
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
	char 	*tab;
	int		i;
	int 	len;
	int 	base;

	i = 0;
	len = malloc_size(n);
	base = power(len - 1);
	tab = (char *) malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (n)
	{
		tab[i++] = ((n / base) + '0');
		//printf("n: %d\nbase: %d\n(n / base): %d\n", n , base, n/base);
		n %= base;
		base /= 10;
	}
	tab[i] = '\0';
	return (tab);
} 
/*
/
%
/
*/
int main()
{
	int		i;

	i = 0;
	printf("%s", ft_itoa(i));
}