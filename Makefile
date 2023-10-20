# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2023/10/20 16:34:39 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = ft_atoi.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c
			
OBJ_FILES = ft_atoi.o \
			ft_calloc.o \
			ft_isalnum.o \
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isprint.o \
			ft_memcmp.o\
			ft_memcpy.o \
			ft_memmove.o \
			ft_memset.o \
			ft_strchr.o \
			ft_strdup.o \
			ft_strncmp.o \
			ft_strnstr.o \
			ft_strrchr.o \
			ft_tolower.o \
			ft_toupper.o


NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: ${NAME}

${NAME}: ${OBJ_FILES}
	${CC} ${OBJ_FILES} -o ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@
	
clean:
	rm -f *.o
	
fclean: clean
	rm -f ${NAME}
	
re: fclean all
