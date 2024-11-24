/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:35:14 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/19 20:48:34 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	printx(unsigned long n, int booll)
{
	char	*base;
	char	list[40];
	char	*res;
	int		len;

	if (booll == 1)
		base = "0123456789ABCDEF";
	if (booll == 0)
		base = "0123456789abcdef";
	if (booll == 2)
		base = "0123456789";
	len = ft_strlen(base);
	res = &list[39];
	*res = '\0';
	if (n == 0)
	{
		*--res = base[0];
		return (prints(res));
	}
	while (n)
	{
		*--res = base[n % len];
		n /= len;
	}
	return (prints(res));
}

int	print_poi(void *p)
{
	unsigned long	ptr;
	int				res;

	if (p == NULL)
		return (prints("(nil)"));
	ptr = (unsigned long)p;
	res = 0;
	res += prints("0x");
	res += printx(ptr, 0);
	return (res);
}
