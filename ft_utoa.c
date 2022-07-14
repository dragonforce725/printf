/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:43:14 by marvin            #+#    #+#             */
/*   Updated: 2022/07/12 16:16:56 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_size(unsigned int i)
{
	int	len;

	len = 0;
	if (i <= 0)
		len++;
	while (i)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	int				len;
	char			*str;
	unsigned int	aux;

	len = num_size(n);
	aux = n;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (aux < 0)
	{
		str[0] = '-';
		aux = -aux;
	}
	if (aux == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (aux)
	{
		str[len] = aux % 10 + '0';
		len--;
		aux = aux / 10;
	}
	return (str);
}
