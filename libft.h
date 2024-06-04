/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:04 by niabraha          #+#    #+#             */
/*   Updated: 2024/06/04 21:43:27 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define FALSE 0
# define TRUE 1

# if (BUFFER_SIZE < 1 || BUFFER_SIZE > 2147483647)
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

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

//char

char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//void

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* 
·······························
: ____                        :
:| __ )  ___  _ __  _   _ ___ :
:|  _ \ / _ \| '_ \| | | / __|:
:| |_) | (_) | | | | |_| \__ \:
:|____/ \___/|_| |_|\__,_|___/:
······························· 
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// int

int		ft_lstsize(t_list *lst);

// t_list

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);

// void

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

int		args_char(va_list args);
int		args_digit(va_list args);
int		args_lowerhexa(va_list args);
int		args_percent(void);
int		args_pointer(va_list args);
int		args_string(va_list args);
int		args_unsigned(va_list args);
int		args_upperhexa(va_list args);
int		ft_printf(const char *fmt, ...);
int		ft_putchar_fd_safe(char c, int fd);
int		ft_putstr_safe(char *str);
int		ft_putnbr_base(unsigned long nbr, const char *base);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *s1, unsigned int start, size_t len);
char	*get_next_line(int fd);
size_t	ft_strlen(char const *s);

#endif
