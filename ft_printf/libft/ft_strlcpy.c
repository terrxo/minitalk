/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:21:40 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/05 20:34:21 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	backup;

	i = 0;
	j = 0;
	backup = size;
	while (size > 1 && src[i])
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	if (backup != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (j);
}
