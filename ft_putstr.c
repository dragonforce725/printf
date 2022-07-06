/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 04:14:51 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/07/06 04:18:55 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	int	len;
	
	if (!str)
	{
		write (1, NULL, 6);
		return (6);
	}
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}
