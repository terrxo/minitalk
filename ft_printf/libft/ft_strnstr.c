/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:33:04 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/15 02:18:17 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	char	*big_c;
	char	*little_c;

	big_c = (char *)big;
	little_c = (char *)little;
	i = 0;
	if (!(little_c[0]) || little == big)
		return (big_c);
	while (big_c[i] && i < len)
	{
		c = 0;
		while (big_c[i + c] && little_c[c] && big_c[i + c] == little_c[c] && i
			+ c < len)
		{
			if (!(little_c[c + 1]))
				return ((char *)&big_c[i]);
			c++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
// 	return (0);
// }