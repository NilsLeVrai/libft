/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iotacpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:23:33 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/23 13:08:10 by niabraha         ###   ########.fr       */
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

/* int     ft_recursive_power(int nb, int power)
{
        if (power < 0)
        return (0);
        else if (power == 0)
        return (1);
        else if (power == 1)
        return (nb);
        else if (power >= 2)
        return (nb * ft_recursive_power(nb, power - 1));
        return (0);
} */

char	*ft_itoa(int n)
{
	char *tab;
	int		i;

	i = 0;
	tab = (char *) malloc(sizeof(char) * (malloc_size(n) + 1));
	/* if (!tab)
		return (NULL); */
	while (n > 0)
	{
		tab[i++] = ((n % 10) + '0');
		n /= 10;
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