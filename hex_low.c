/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_low.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:12:53 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/07 21:13:40 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_low(unsigned int a)
{
	char	*tab;
	char	c;
	int		count;

	tab = "0123456789abcdef";
	count = count_hex(a);
	if (a / 16 == 0)
	{
		c = tab[a % 16];
		write(1, &c, 1);
	}
	else
	{
		hex_low(a / 16);
		hex_low(a % 16);
	}
	return (count);
}
