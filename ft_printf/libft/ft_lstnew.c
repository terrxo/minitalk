/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 06:20:46 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 06:23:39 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*teemo;

	teemo = malloc(sizeof(t_list) * 1);
	if (!teemo)
		return (0);
	(*teemo).content = content;
	(*teemo).next = NULL;
	return (teemo);
}
