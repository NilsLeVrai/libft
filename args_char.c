/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:12:56 by niabraha          #+#    #+#             */
/*   Updated: 2024/06/04 21:36:31 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	args_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar_fd_safe(c, 1));
}
