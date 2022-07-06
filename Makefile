# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 01:21:26 by mhenriqu          #+#    #+#              #
#    Updated: 2022/07/06 04:36:59 by mhenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_printf.c\
	  ft_printf_arg.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_putnbr_u.c\
	  ft_putstr.c

FLAGS = -Wall -Wextra -Werror

CC = cc

NAME	= libftprintf.a

OBJ = $(SRC:.c=.o)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all re clean fclean
