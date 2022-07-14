/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:22:50 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/07/14 01:30:32 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_print_arg(const char *fmt, int i, va_list ap);
int		ft_putnbr_fd(int n);
int		ft_putstr(char *str);
int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c);
int		ft_putnbr(int nbr);
char	*ft_strchr(const char *s, int c);
char	*ft_utoa(unsigned int n);
char	*ft_itoa(int n);
int		putnbr_u(unsigned int nbr);
int		ft_put_pointer(void *nbr, char *base);
int		ft_put_hex(unsigned int nbr, char *base);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

#endif
