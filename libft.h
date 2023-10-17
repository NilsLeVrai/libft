/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:04 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/17 13:16:04 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/*
······························
: ____   _    ____ _____   _ :
:|  _ \ / \  |  _ \_   _| / |:
:| |_) / _ \ | |_) || |   | |:
:|  __/ ___ \|  _ < | |   | |:
:|_| /_/   \_\_| \_\|_|   |_|:
······························
*/

//char

char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *s, int c);

//int

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);

// malloc

char	*strdup(const char *s);
void	*calloc(size_t nmemb, size_t size);

//size_t

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);

//void

void	ft_bzero(void *s, size_t n);
void	*memchr(const void *s, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);

/*
·······························
: ____            _     ____  :
:|  _ \ __ _ _ __| |_  |___ \ :
:| |_) / _` | '__| __|   __) |:
:|  __/ (_| | |  | |_   / __/ :
:|_|   \__,_|_|   \__| |_____|:
·······························
*/

#endif
