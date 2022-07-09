# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/06 01:21:26 by mhenriqu          #+#    #+#              #
#    Updated: 2022/07/09 17:20:22 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_printf.c\
	  ft_printf_arg.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_putnbr_u.c\
	  ft_putstr.c\
	  ft_utoa.c\
	  ft_put_hex.c\
	  ft_strchr.c\
	  ft_itoa.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_put_pointer.c

FLAGS = -Wall -Wextra -Werror

CC = cc

NAME	= libftprintf.a

OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
		@ar -rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all re clean fclean