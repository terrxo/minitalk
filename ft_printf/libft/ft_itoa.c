/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:27:16 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/12 21:02:59 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*print(int c, int count, char *str)
{
	int		power;
	char	*start;

	start = str;
	if (c < 0)
	{
		str[0] = '-';
		c *= -1;
		str++;
	}
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

int	get_length(int n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (0);
	if (n < 0)
		n *= -1;
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

char	*ft_itoa(int nb)
{
	int		count;
	char	*str;

	count = get_length(nb);
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb > 0)
		str = malloc(count + 1);
	else
		str = malloc(count + 2);
	if (!str)
		return (0);
	str = print(nb, count - 1, str);
	return (str);
}

// int	main(void)
// {
// 	char *shit = ft_itoa(-5859);
// 	printf("STRING: %s", shit);
// 	return (0);
// }