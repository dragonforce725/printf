/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:22:50 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/07/08 03:28:57 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

int	ft_putnbr(int nbr);
int ft_putstr(char *str);
int ft_print(cont char *format, ...);
int ft_putchar(char c);
int ft_putnbr(int nbr);

#endif
