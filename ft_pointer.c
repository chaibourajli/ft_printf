/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:55:27 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/09 16:05:50 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_ptr(unsigned long stk)
{
	int	count;

	count = 0;
	if (stk == 0)
		return (1);
	while (stk > 0)
	{
		stk /= 16;
		count++;
	}
	return (count);
}

void	write_ptr(unsigned long a)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (a <= 15)
		ft_putchar(tab[a]);
	else
	{
		write_ptr(a / 16);
		write_ptr(a % 16);
	}
}

int	ft_pointer(unsigned long a)
{
	int		count;

	write(1, "0x", 2);
	count = 2 + count_ptr(a);
	write_ptr(a);
	return (count);
}
