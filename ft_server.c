/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:36:19 by ndivjak           #+#    #+#             */
/*   Updated: 2023/01/11 21:13:37 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	receive(int signum)
{
	static int	bit;
	static int	i;

	if (signum == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	ft_printf("Process ID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, receive);
		signal(SIGUSR2, receive);
		pause();
	}
	return (0);
}
