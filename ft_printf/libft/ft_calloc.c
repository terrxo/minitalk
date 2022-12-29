/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:56:11 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/15 02:19:40 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!(ptr))
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
// int	main(void)
// {
// 	char *shit = ft_calloc(4, 10);
// 	return (0);
// }