/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourajl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:44:56 by cbourajl          #+#    #+#             */
/*   Updated: 2021/12/09 16:14:45 by cbourajl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_hex(unsigned int stk)
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
