/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:58:08 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/08 02:08:44 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		l;

	i = 0;
	if (s1 && s2)
	{
		l = ft_strlen(s1) + ft_strlen(s2);
		dst = malloc(sizeof(char) * l + 1);
		if (!dst)
			return (0);
		while (s1[i])
		{
			dst[i] = s1[i];
			i++;
		}
		while (*s2)
			dst[i++] = *s2++;
		dst[i] = '\0';
		return (dst);
	}
	else
		return (0);
}

// int	main(void)
// {
// 	char s1[10] = "test";
// 	char s2[10] = "test";
// 	char *result = ft_strjoin(s1, s2);
// 	printf("The result is %s\n", result);
// 	printf("s1 doesn't change: %s\n", s1);
// 	printf("s2 doesn't change: %s\n", s2);
// 	return (0);
// }