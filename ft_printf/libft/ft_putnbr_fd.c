/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:30:56 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 01:00:15 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pn_get_count(int n)
{
	int	i;

	i = 0;
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

void	pn_print(int c, int count, int fd)
{
	int		power;
	char	prt;

	power = 1;
	if (c < 10)
		count--;
	while (count > 0)
	{
		power *= 10;
		count--;
	}
	while (power != 0)
	{
		prt = c / power + '0';
		write(fd, &prt, 1);
		c = c % power;
		power = power / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	count;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	count = pn_get_count(n);
	pn_print(n, count, fd);
}
