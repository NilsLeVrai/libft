/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:04 by niabraha          #+#    #+#             */
/*   Updated: 2023/10/20 16:50:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

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

int		ft_atoi(const char *nptr);
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

char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

//size_t

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);

//void

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

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
