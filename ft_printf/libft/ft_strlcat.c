/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:55:40 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/15 01:25:13 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_length;
	unsigned int	dest_length;
	unsigned int	i;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[i] && dest_length + i + 1 < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

// int	main(void)
// {
// 	char dest[10] = "a";
// 	printf("%i", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
// 	write(1, "\n", 1);
// 	printf("%s", dest);
// 	return (0);
// }