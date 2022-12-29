/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_pointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:49:39 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/25 02:02:54 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_base(unsigned long nb, char *base, int length);

int	ft_print_hex(unsigned int nb, char *base)
{
	int	length;

	length = 0;
	return (ft_print_base((unsigned long)nb, base, length));
}

static int	ft_print_base(unsigned long nb, char *base, int length)
{
	if (nb >= 16)
	{
		length = ft_print_base(nb / 16, base, length);
		length = ft_print_base(nb % 16, base, length);
	}
	else
	{
		ft_print_char(base[nb]);
		length++;
	}
	return (length);
}

static int	ft_print_pointer_hex(unsigned long nb, char *base)
{
	int	length;

	length = 0;
	return (ft_print_base((unsigned long)nb, base, length));
}

int	ft_print_pointer(unsigned long ptr)
{
	int	length;

	length = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	length += ft_print_str("0x");
	length += ft_print_pointer_hex(ptr, "0123456789abcdef");
	return (length);
}
