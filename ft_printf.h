/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:23:47 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/09 16:42:25 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putunbr(unsigned long a);
int	hex_low(unsigned int nb);
int	hex_up(unsigned int nb);
int	ft_pointer(unsigned long a);
int	count_hex(unsigned int stk);
int	ft_cases(va_list ptr, const char format);

#endif
