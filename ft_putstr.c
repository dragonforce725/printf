/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 04:14:51 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/07/08 16:24:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
