/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:13:43 by ndivjak           #+#    #+#             */
/*   Updated: 2023/01/11 21:15:47 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

int	send_bit(int pid, int byte)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (byte & 1 << bit)
		{
			if (kill(pid, SIGUSR1) == -1)
				return (1);
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				return (1);
		}
		usleep(1000);
		bit++;
	}
	return (0);
}

int	send_message(int pid, char *msg_str)
{
	while (*msg_str)
	{
		if (send_bit(pid, *msg_str) == 1)
			return (1);
		msg_str++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (pid == 0)
			return (ft_printf("Problem parsing Process ID..\n"));
		if (send_message(pid, av[2]) == 1)
			return (ft_printf("Problem sending message to server..\n"));
		return (0);
	}
	return (ft_printf("Please use the correct number of parameters..\n"));
}
