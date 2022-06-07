/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:48:00 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/09 16:15:45 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(long stk)
{
	int		count;

	count = 0;
	if (stk == 0)
		return (1);
	if (stk < 0)
	{
		count = 1;
		stk *= -1;
	}
	while (stk > 0)
	{
		stk /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int nb)
{
	long	a;
	char	c;
	int		count;

	a = nb;
	count = ft_count(a);
	if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
	}
	if (a >= 0 && a <= 9)
	{
		c = a + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	return (count);
}
