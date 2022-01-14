/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 22:59:49 by maryhelen         #+#    #+#             */
/*   Updated: 2022/01/14 13:53:28 by maryhelen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(long long int nbr)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (!nbr)
	{
		write(1, "(nil)", 5);
		i = 5;
	}
	if (nbr < 0)
		nbr *= (-1);
	{
		write(1, "0x", 2);
		i = (ft_base((unsigned long int) nbr, base) + 2);
	}
	return (i);
}
