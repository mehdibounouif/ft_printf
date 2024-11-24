/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:50:56 by mbounoui          #+#    #+#             */
/*   Updated: 2024/11/19 00:52:17 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PIRNTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		check_after_per(char c, va_list args);
int		printx(unsigned long n, int booll);
int		prints(char *s);
int		printc(char c);
int		print_id(int n);
int		print_poi(void *p);

#endif
