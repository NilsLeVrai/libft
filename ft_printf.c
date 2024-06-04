/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:33:36 by niabraha          #+#    #+#             */
/*   Updated: 2024/06/04 21:43:59 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid_fmt(const char *fmt)
{
	if (ft_strchr("cspdiuxX%", *fmt) != NULL)
		return (1);
	return (0);
}

static int	check_args(const char *fmt, va_list args)
{
	if (*fmt == 'c')
		return (args_char(args));
	else if (*fmt == 'd' || *fmt == 'i')
		return (args_digit(args));
	else if (*fmt == 'p')
		return (args_pointer(args));
	else if (*fmt == 's')
		return (args_string(args));
	else if (*fmt == 'u')
		return (args_unsigned(args));
	else if (*fmt == 'x')
		return (args_lowerhexa(args));
	else if (*fmt == 'X')
		return (args_upperhexa(args));
	else if (*fmt == '%')
		return (args_percent());
	return (0);
}

static int	ft_parser(const char *fmt, va_list args)
{
	int	reponse;
	int	num_args;

	reponse = 0;
	num_args = 0;
	while (*fmt)
	{
		if (*fmt == '%' && *(fmt + 1) != '\0' && valid_fmt(fmt + 1))
		{
			reponse = check_args((ft_putchar_fd_safe(*fmt, 1), fmt + 1), args);
			num_args += reponse;
		}
		else
		{
			reponse = ft_putchar_fd_safe(*fmt, 1);
			num_args += reponse;
		}
		++fmt;
	}
	return (num_args);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		len;

	len = 0;
	if (!fmt)
		return (-1);
	va_start(args, fmt);
	len = ft_parser(fmt, args);
	va_end(args);
	return (len);
}
