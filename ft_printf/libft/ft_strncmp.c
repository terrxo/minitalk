/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:50:55 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/07 18:05:13 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

// int	main(void)
// {
// 	char *shit = "anothershest";
// 	char *bed = "";
// 	printf("%i", ft_strncmp(shit, bed, 4));
// 	return (0);
// }