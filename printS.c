/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printS.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:35:00 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/19 00:35:01 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prints(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}