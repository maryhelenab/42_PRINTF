/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbuque <malbuque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:20:54 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/21 20:53:33 by malbuque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!str)
		return (0);
	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != 37)
		{
			write(1, &str[i], 1);
			len++;
		}
		else
		{
			i++;
			len += ft_check_arg(str[i], args);
		}
		i++;
	}
	va_end (args);
	return (len);
}

int main(void)
{
	char c;
	char *cu;

	c = 't';
	cu = "testando";
	ft_printf("%s", cu);
	printf("%s", cu);
	return(0);
}
