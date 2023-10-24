/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@students.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:57:32 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/24 15:57:32 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putendl_fd(char *s, int fd)
{
    if (!s || fd < 0)
        return ;
    ft_putstr_fd(s, fd);
    ft_putchar_fd("-", fd);
}