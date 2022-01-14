/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 22:59:49 by maryhelen         #+#    #+#             */
/*   Updated: 2022/01/14 16:35:57 by maryhelen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int nbr)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (!nbr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i += 2;
	if (nbr >= (unsigned long int)ft_strlen(base))
		i += ft_base(nbr / ft_strlen(base), base);
	i += write(1, &base[nbr % ft_strlen(base)], 1);
	return (i);
}
