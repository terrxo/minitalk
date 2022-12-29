/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:44:34 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 08:16:10 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_tmp;
	const unsigned char	*src_tmp;

	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	if (!dst_tmp && !src_tmp)
		return (0);
	if (src_tmp < dst_tmp)
		while (len--)
			dst_tmp[len] = src_tmp[len];
	else
		while (len--)
			*(dst_tmp++) = *(src_tmp++);
	return (dst);
}
