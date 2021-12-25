/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:20:54 by malbuque          #+#    #+#             */
/*   Updated: 2021/12/25 18:29:46 by maryhelen        ###   ########.fr       */
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
		if (str[i] == 37)
		{
			i++;
			len += ft_check_arg(str[i], args);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end (args);
	return (len);
}

int	main(void)
{
	/*char *p = "tester";
	int Original = printf("%p, %%", p);
	printf("\n");
	int Meu = ft_printf("%p, %%", p);
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/

	/*int Meu = ft_printf("\n%s%c%s%c\nDone in %u%i%d %s %i%%", "hello", ' ', "world", '!', 2,0,21, "with", 100);
	int Original =printf("\n%s%c%s%c\nDone in %u%i%d %s %i%%", "hello", ' ', "world", '!', 2,0,21, "with", 100);
	printf("\n");
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/

	/*int Meu = ft_printf("\n%i %d %u %u %d %i", -1, -2, -3, 4, 5, 6);
	int Original =printf("\n%i %d %u %u %d %i", -1, -2, -3, 4, 5, 6);
	printf("\n");
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/

	/*int Meu = ft_printf("\n%s", "O mundo está um caos");
	int Original =printf("\n%s", "O mundo está um caos");
	printf("\n");
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/

	/*int Meu = ft_printf("\n%c", 'a');
	int Original =printf("\n%c", 'a');
	printf("\n");
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/

	/*int Meu = ft_printf("\n%%");
	int Original =printf("\n%%");
	printf("\n");
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/
	
	/*char	c = 't';
	int 	i = 1200;
	char	*str = "testando";
	int		j = -2147483647;
	int Meu = ft_printf("%i, %%, %c, %s, %p, %d, %x, %X", i, c, str, str, j, i, j);
	printf("\n");
	int Original = printf("%i, %%, %c, %s, %p, %d, %x, %X", i, c, str, str, j, i, j);
	printf("\nOriginal: %i \nMeu: %i\n", Original, Meu);*/
	
	return (0);
}
