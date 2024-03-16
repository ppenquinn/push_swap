# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nappalav <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 23:28:39 by nappalav          #+#    #+#              #
#    Updated: 2024/03/17 02:09:49 by nappalav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PUSH_SW = push_swap.a
CC = cc
CP = cp
AR = ar
# CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs

LIB = ./resource/libprintf.a

SRC = main.c push_swap.c push_swap_util.c

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(LIB) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:	fclean all

.PHONY: re clean fclean all
