/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:37:02 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 07:51:27 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*plcr;

	if (lst && f)
	{
		while (lst)
		{
			f((*lst).content);
			plcr = (*lst).next;
			lst = plcr;
		}
	}
}
