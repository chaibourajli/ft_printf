/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:08:44 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/09 16:09:43 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_unsigned(unsigned long stk)
{
	int		count;

	count = 0;
	if (stk == 0)
		return (1);
	while (stk > 0)
	{
		stk /= 10;
		count++;
	}
	return (count);
}

int	ft_putunbr(unsigned long a)
{
	char			c;
	int				count;

	count = count_unsigned(a);
	if (a >= 0 && a <= 9)
	{
		c = a + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putunbr(a / 10);
		ft_putunbr(a % 10);
	}
	return (count);
}
