/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 07:43:46 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 07:48:37 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_lst;
	t_list	*f_content;

	if (!f || !del)
		return (0);
	f_lst = 0;
	while (lst)
	{
		f_content = ft_lstnew(f((*lst).content));
		if (!f_content)
		{
			ft_lstclear(&f_content, del);
			return (NULL);
		}
		ft_lstadd_back(&f_lst, f_content);
		lst = (*lst).next;
	}
	return (f_lst);
}
