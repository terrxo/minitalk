/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:56:05 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/12 16:51:48 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

// int	ft_atoi(const char *str)
// {
// 	long	illness[4];

// 	illness[0] = 0;
// 	illness[1] = 0;
// 	illness[2] = 1;
// 	illness[3] = 0;
// 	while (str[illness[1]] != '\0')
// 	{
// 		if (!((str[illness[1]] >= '0' && str[illness[1]] <= '9')
// 				|| (str[illness[1]] <= 13 && str[illness[1]] >= 9)
// 				|| str[illness[1]] == '+' || str[illness[1]] == '-'))
// 			break ;
// 		if (str[illness[1]] == '-')
// 			illness[2] = -1;
// 		if (str[illness[1]] == '+' || str[illness[1]] == '-')
// 			illness[3]++;
// 		if (illness[3] > 1)
// 			return (illness[0] *= illness[2]);
// 		else if (str[illness[1]] >= '0' && str[illness[1]] <= '9')
// 			illness[0] = illness[0] * 10 + str[illness[1]] - '0';
// 		illness[1]++;
// 	}
// 	return (illness[0] *= illness[2]);
// }

int	ft_atoi(const char *str)
{
	long long	rv;
	long		mchck;

	mchck = 1;
	rv = 0;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			mchck = -1;
	if (*str == '-' || *str == '+')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		if (rv > INT_MAX / 10 || (rv == INT_MAX / 10 && *str - '0' > 7))
		{
			if (mchck == 1)
				return (-1);
			else if (rv == INT_MAX / 10 && *str - '0' > 7)
				return (mchck * 2147483648);
			return (0);
		}
		rv = (rv * 10) + *str++ - '0';
	}
	return (rv *= mchck);
}

// int	main(void)
// {
// 	char n[15];

// 	sprintf(n, "%i", (-2147483647 - 1));
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);

// 	printf("Shitoi%i", i2);
// 	printf("\nAtoi %i", i1);
// }