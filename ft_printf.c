/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:16:41 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/19 00:56:26 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_after_per(char c, va_list args)
{
	if (c == 'c')
		return (printc(va_arg(args, int)));
	else if (c == 's')
		return (prints(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (print_id(va_arg(args, int)));
	else if (c == 'x')
		return (printx(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (printx(va_arg(args, unsigned int), 1));
	else if (c == 'u')
		return (printx(va_arg(args, unsigned int), 2));
	else if (c == 'p')
		return (print_poi(va_arg(args, void *)));
	else if (c == '%')
		return (printc('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, str);
	ret = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ret += check_after_per(str[i + 1], args);
			i++;
		}
		else
			ret += printc(str[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
