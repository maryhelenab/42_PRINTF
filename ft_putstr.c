/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:54:42 by maryhelen         #+#    #+#             */
/*   Updated: 2022/01/05 21:14:12 by maryhelen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const void *str)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *) str;
	if (str == NULL)
	{
		write(1, "(null)",6);
		return (6);
	}
	while (temp[i])
	{
		write(1, &temp[i], 1);
		i++;
	}	
	return (i);
}
