/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:33:59 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 07:57:06 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*plcr;

	if (!lst)
		return ;
	while (*lst)
	{
		plcr = (**lst).next;
		ft_lstdelone(*lst, del);
		*lst = plcr;
	}
}
