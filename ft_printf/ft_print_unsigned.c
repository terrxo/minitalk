/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:48:31 by ndivjak           #+#    #+#             */
/*   Updated: 2022/11/21 10:34:32 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*u_print(unsigned int c, int count, char *str)
{
	unsigned int	power;
	char			*start;

	start = str;
	power = 1;
	if (c < 10)
		count--;
	while (count-- > 0)
		power *= 10;
	while (power != 0)
	{
		*str++ = c / power + '0';
		c = c % power;
		power = power / 10;
	}
	*str = '\0';
	return (start);
}

static int	u_get_length(unsigned int n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (0);
	if (n < 10)
	{
		return (1);
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_uitoa(unsigned int nb)
{
	int		count;
	char	*str;

	count = u_get_length(nb);
	str = malloc(count + 1);
	if (!str)
		return (0);
	str = u_print(nb, count - 1, str);
	return (str);
}

int	ft_print_uint(unsigned int nb)
{
	char	*str;
	int		length;

	if (nb < 10)
		return (ft_print_char(nb + '0'));
	str = ft_uitoa(nb);
	length = ft_strlen(str);
	ft_print_str(str);
	free(str);
	return (length);
}
