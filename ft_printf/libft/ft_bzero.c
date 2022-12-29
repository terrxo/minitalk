/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:11:11 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/05 20:36:48 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// int	main(void)
// {
// 	char dumbass[30] = "eatsometheigfha";

// 	ft_bzero(dumbass + 4, 5);
// 	printf("%s", dumbass);
// 	return (0);
// }