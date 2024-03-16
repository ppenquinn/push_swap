# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nappalav <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 00:29:16 by nappalav          #+#    #+#              #
#    Updated: 2024/03/15 20:20:06 by nappalav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a
CC = cc
CP = cp
AR = ar
CFLAGS = -Wall -Wextra -Werror -c
ARFLAGS = -rcs

LIBFT = ../libft/libft.a

SRC = ft_printf.c ft_printf_alpha.c ft_printf_num.c ft_printf_add.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
		$(CP) $(LIBFT) $(NAME)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o:	%.c
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -f $(OBJ) $(OBJBONUS)

fclean: clean
		rm -f $(NAME) $(BONUS)

re:	fclean all

.PHONY: re clean fclean all
