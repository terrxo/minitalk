/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndivjak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:33:55 by ndivjak           #+#    #+#             */
/*   Updated: 2022/10/25 02:06:58 by ndivjak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	var_controller(va_list args, const char type);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_int(int nb);
int	ft_print_uint(unsigned int nb);
int	ft_print_hex(unsigned int nb, char *base);
int	ft_print_pointer(unsigned long ptr);

#endif