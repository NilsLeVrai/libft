/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:04 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/17 11:46:24 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

/*
······························
: ____   _    ____ _____   _ :
:|  _ \ / \  |  _ \_   _| / |:
:| |_) / _ \ | |_) || |   | |:
:|  __/ ___ \|  _ < | |   | |:
:|_| /_/   \_\_| \_\|_|   |_|:
······························
*/

int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*memset(void *s, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
size_t	strlcpy(char *dst, const char *src, size_t n);
size_t	strlcat(char *dst, const char *src, size_t n);
int	toupper(int c);
int	tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
int	strncmp(const char *s1, const char *s2, size_t n);
void	*memchr(const)
#endif
