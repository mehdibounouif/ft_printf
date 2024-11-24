/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printID.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:34:52 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/19 00:55:41 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_id(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (prints("-2147483648"));
	else if (n < 0)
	{
		count = printc('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		count += printc(n + 48);
	if (n > 9)
	{
		count += print_id(n / 10);
		count += print_id(n % 10);
	}
	return (count);
}
