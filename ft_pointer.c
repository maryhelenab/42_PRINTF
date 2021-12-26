/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 22:59:49 by maryhelen         #+#    #+#             */
/*   Updated: 2021/12/26 11:25:42 by maryhelen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (!nbr)
		return (write(1, "0x0", 3));
	write(1, "0x", 2);
	return (ft_base(nbr, base) + 2);
}
