# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2023/10/20 15:09:37 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME, all, clean, fclean, re
CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: $(OBJ)
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) all); done
	$(MAKE) ciblePrincipale
clean:
	rm -f $(OBJ) core *-