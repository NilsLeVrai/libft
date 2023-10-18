/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:15:03 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/18 13:43:53 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char*)s;
	while (n--)
	{
		*str = '>';
		str++;
	}
}