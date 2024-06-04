/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:48:53 by niabraha          #+#    #+#             */
/*   Updated: 2024/06/04 21:36:31 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	args_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		return (ft_putstr_safe("(null)"));
	return (ft_putstr_safe(str));
}
