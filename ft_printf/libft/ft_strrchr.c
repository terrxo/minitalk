/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:44:26 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/16 19:09:15 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	while (c > 127)
		c -= 128;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	const char str[] = "bonjour";
// 	const char ch = 'b';
// 	char *ret;

// 	ret = ft_strrchr(str, 'b');

// 	printf("String after |%c| is - |%s|\n", ch, ret);

// 	return (0);
// }