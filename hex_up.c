/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:38:34 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/07 21:16:18 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_up(unsigned int a)
{
	char	*tab;
	char	c;
	int		count;

	tab = "0123456789ABCDEF";
	count = count_hex(a);
	if (a / 16 == 0)
	{
		c = tab[a % 16];
		write(1, &c, 1);
	}
	else
	{
		hex_up(a / 16);
		hex_up(a % 16);
	}
	return (count);
}
