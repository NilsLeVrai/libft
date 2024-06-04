# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2024/06/04 21:35:25 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_PRINTF = args_char.c \
				args_digit.c \
				args_lowerhexa.c \
				args_percent.c \
				args_pointer.c \
				args_string.c \
				args_unsigned.c \
				args_upperhexa.c \
				ft_printf.c \
				ft_printf_utils.c
				
FILES_PT1 = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c

FILES_PT2 = ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_split.c \
			ft_substr.c

FILES_PT3 = ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstiter_bonus.c


FILES_GNL = get_next_line.c \
			get_next_line_utils.c

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
CC = cc
ARFLAGS = rcs

OBJ = $(FILES_PT1:.c=.o) $(FILES_PT2:.c=.o) $(FILES_PT3:.c=.o) $(FILES_PRINTF:.c=.o) $(FILES_GNL:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f *.o
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re bonus
