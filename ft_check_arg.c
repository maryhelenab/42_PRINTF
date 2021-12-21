/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:29:25 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/21 21:44:08 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c' || c == '%')
		len = ft_putchar(va_arg(args, int), 1);
	else if (c == 's')
		len = ft_putstr(va_arg(args, int), 1);
	/*else if (c == 'p')
		return (ft_printf_p);
	else if (c == 'd')
		return (ft_printf_d);
	else if (c == 'i')
		return (ft_printf_d);
	else if (c == 'u')
		return (ft_printf_u);
	else if (c == 'x')
		return (ft_printf_x);
	else
		return (ft_printf_xx);*/
	return (len);
}
