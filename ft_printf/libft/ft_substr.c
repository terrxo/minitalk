/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 00:36:29 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/16 21:52:00 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	else if ((unsigned int)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	if (len <= 0)
		ft_strlcpy(sub, "", 1);
	else
		ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}

// int	main(void)
// {
// 	ft_substr("hola", 4294967295, 0);
// 	return (0);
// }
