/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 14:41:51 by maryhelen         #+#    #+#             */
/*   Updated: 2021/12/25 17:38:20 by maryhelen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(long long int nbr, char *base)
{
	int	i;

	i = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		i++;
	}
	if (nbr >= (long long int)ft_strlen(base))
		i += ft_base(nbr / ft_strlen(base), base);
	i += write(1, &base[nbr % ft_strlen(base)], 1);
	return (i);
}
