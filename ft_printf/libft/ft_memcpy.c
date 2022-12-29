/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:36:27 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/08 01:14:28 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*c_dst;
	char	*c_src;
	char	*s_pos;

	if (!dst && !src)
		return (0);
	c_dst = (char *)dst;
	c_src = (char *)src;
	s_pos = c_dst;
	while (n > 0)
	{
		*c_dst = *c_src;
		c_dst++;
		c_src++;
		n--;
	}
	c_dst = s_pos;
	return (dst);
}

// int	main(void)
// {
// 	char *dst = "";
// 	char *src = "";
// 	ft_memcpy(dst, src, 8);
// 	printf("%s", dst);
// 	return (0);
// }