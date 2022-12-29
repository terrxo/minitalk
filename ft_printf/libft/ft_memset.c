/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:52:20 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/14 00:59:48 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str_arr;

	str_arr = (unsigned char *)b;
	while (len--)
		*str_arr++ = c;
	return (b);
}

// int	main(void)
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str);

// 	ft_memset(str + 13, '.', 8 * sizeof(char));

// 	printf("After memset():  %s", str);
// 	return (0);
// }