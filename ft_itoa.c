/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:43:14 by marvin            #+#    #+#             */
/*   Updated: 2022/07/14 01:19:08 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size(int i)
{
	int	len;

	len = 0;
	if (i <= 0)
		len++;
	while (i)
	{
		len++;
		i /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	aux;
	int		i;

	i = size(n);
	aux = n;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (aux < 0)
	{
		str[0] = '-';
		aux *= -1;
	}
	if (aux == 0)
		str[0] = '0';
	str[i--] = '\0';
	while (aux)
	{
		str[i--] = (aux % 10) + '0';
		aux /= 10;
	}
	return (str);
}
