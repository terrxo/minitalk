/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:56:58 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/15 01:37:34 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*rv;

	i = 0;
	rv = 0;
	if (s != 0)
	{
		while (s[i])
			i++;
		rv = malloc((sizeof(char) * i) + 1);
		if (!rv)
			return (0);
		i = 0;
		while (s[i])
		{
			rv[i] = f(i, s[i]);
			i++;
		}
		rv[i] = '\0';
	}
	return (rv);
}
