/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:43:43 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/17 10:43:54 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	atoi(const char *nptr)
{
	int	i;
	int	neg;
	long	res;

	i = 0;
	neg = 1;
	res = 0;

	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		*nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			neg *= -1;
		*nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
		res = res * 10 + *nptr - 48;
		*nptr++;
	return (res * neg);
}

int main()
{
	const char *tab;

	tab = "-26541";
	printf("%d", atoi(tab));
}
