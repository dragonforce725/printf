/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 02:26:44 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/07/08 07:33:33 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_arg(const char *fmt, int i, va_list ap)
{
	if (fmt[i + 1] == '%')
		return (ft_putchar(fmt[i + 1]));
	else if (fmt[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (fmt[i + 1] == 's')
		return (ft_putstr(va_arg(ap,char*)));
	else if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap,int)));
	else if (fmt[i + 1] == 'u')
		return (putnbr_u(va_arg(ap, unsigned int)));
	else if (fmt[i + 1] == 'x') || fmt[i + 1] == 'X')
	{
		if (fmt[i + 1 == 'X')
			return (ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF"));
		else
			return (ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef"));
	}
	else if (fmt[i + 1] == 'p')
		return (ft_putstr("0x") + put_pointer(va_arg(ap,void *),
					"0123456789abcdef"));
	else
		return (0);
}
