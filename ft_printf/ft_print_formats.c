/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_formats.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:28:54 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/25 02:02:47 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
		return (ft_print_str("(null)"));
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_print_int(int nb)
{
	char	*str;
	int		length;

	str = ft_itoa(nb);
	ft_print_str(str);
	length = ft_strlen(str);
	free(str);
	return (length);
}
