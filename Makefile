# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nappalav <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 23:28:39 by nappalav          #+#    #+#              #
#    Updated: 2024/04/19 14:00:16 by nappalav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PUSH_SW = push_swap.a
CC = cc
RM = rm
# CFLAGS = -Wall -Wextra -Werror
RMFLAGS = -f

LIB = ./resource/libprintf.a

SRC = main.c push_swap.c push_swap_util.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	${MAKE} -C ./resource/libft
	${MAKE} -C ./resource/ft_printf
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)


clean:
	${MAKE} -C ./resource/libft fclean
	${MAKE} -C ./resource/ft_printf fclean
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re:	fclean all

.PHONY: re clean fclean all
