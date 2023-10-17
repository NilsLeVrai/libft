/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:09:16 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/17 15:27:01 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
#include <stdio.h>
int main ()
{
	const char tab[];

	tab = "ouais la ne-zo";
	printf("%ld", ft_strlen(tab));
}
