# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2023/10/20 16:04:06 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#Arguments
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

#Sources

SRC_FILES = calloc \ft_isalnum \ ft_isalpha.c \ ft_isascii \ 
ft_isdigit \ ft_isprint \ ft_memcmp \ 
ft_strchr \ strdup \ ft_strncmp \ ft_strnstr \ ft_strrchr \ ft_tolower \ ft_toupper
			

all: $(OBJ)
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) all); done
	$(MAKE) ciblePrincipale
clean:
	rm -f $(OBJ) core *-
fclean:

re:
