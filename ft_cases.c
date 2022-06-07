/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:08:05 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/09 22:21:14 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_cases(va_list ptr, const char format)
{
	int	count;

	count = 0;
	if (format == 's')
		count += ft_putstr(va_arg(ptr, char *));
	else if (format == 'c')
		count += ft_putchar(va_arg(ptr, int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(ptr, int));
	else if (format == 'u')
		count += ft_putunbr(va_arg(ptr, unsigned int));
	else if (format == 'x')
		count += hex_low(va_arg(ptr, int));
	else if (format == 'X')
		count += hex_up(va_arg(ptr, int));
	else if (format == 'p')
		count += ft_pointer((unsigned long)(va_arg(ptr, void *)));
	else if (format == '%')
	{
		count++;
		ft_putchar('%');
	}
	else
		count++;
	return (count);
}
