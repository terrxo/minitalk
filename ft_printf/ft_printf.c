/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 06:35:11 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/25 02:07:00 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	var_controller(va_list args, const char type)
{
	int	length;

	length = 0;
	if (type == 'c')
		length += ft_print_char(va_arg(args, int));
	else if (type == 's')
		length += ft_print_str(va_arg(args, char *));
	else if (type == 'i' || type == 'd')
		length += ft_print_int(va_arg(args, int));
	else if (type == 'u')
		length += ft_print_uint(va_arg(args, unsigned int));
	else if (type == '%')
		length += ft_print_char('%');
	else if (type == 'x')
		length += ft_print_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		length += ft_print_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (type == 'p')
		length += ft_print_pointer(va_arg(args, unsigned long));
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;

	length = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			length += var_controller(args, *++str);
		else
			length += ft_print_char(*str);
		str++;
	}
	va_end(args);
	return (length);
}

// int	main(void)
// {
// 	int test = ft_printf("This is a test: %x\n", -1);
// 	int shitter = printf("Length: %x\n", -1);
// 	printf("ORIGINAL: %d, FAKE: %d\n", shitter, test);
// 	return (0);
// }