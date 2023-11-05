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
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
int malloc_size(int n)
{
	int	i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	if (nb == 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char	*p;
	int	len;
	size_t	nb;

	len = malloc_size(n);
	nb = n;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n < 0)
	{
		*p = '-';
		nb *= -1;
	}
	if (nb == 0)
		*p = '0';
	while (nb != 0)
	{
		*(p + len - 1) = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (p);
}
/*
int main ()
{
	int i = INT_MAX;
	for (i=0; i<= INT_MAX; i++)
{

	printf("%d: %s\n", malloc_size(i), ft_itoa(i));
	//printf("%s\n", ft_itoa(i));
}
}*/
