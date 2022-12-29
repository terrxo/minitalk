/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:18:02 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/19 11:59:31 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*find_next(char *str, char c)
{
	while (*str == c)
		str++;
	return (str);
}

int	count_words(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

int	get_length_bitch(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == c))
		i++;
	return (i);
}

char	**do_shit(char **array, int words, char *str, char c)
{
	int		len;
	char	**start;

	start = array;
	while (words)
	{
		str = find_next(str, c);
		len = get_length_bitch(str, c);
		*array = malloc(sizeof(char) * len + 1);
		if (!*array)
			return (0);
		ft_strlcpy(*array++, str, len + 1);
		str += len;
		words--;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	int		words;

	if (!s)
		return (0);
	str = (char *)s;
	words = count_words(str, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (0);
	array = do_shit(array, words, str, c);
	array += words;
	*array = 0;
	return (array - words);
}

// int	main(void)
// {
// 	char **shit;
// 	shit = ft_split("shit\0cock\0fucker", '\0');
// 	while (*shit)
// 	{
// 		printf(":%s:\n", *shit);
// 		shit++;
// 	}
// }
