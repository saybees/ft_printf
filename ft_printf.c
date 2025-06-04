/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:55:51 by sabrown           #+#    #+#             */
/*   Updated: 2025/06/04 20:44:30 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_type(char c, va_list args)
{
	int		n;

	n = 0;
	if (c == 'c')
		n += print_c(va_arg(args, int));
	else if (c == 's')
		n += print_str(va_arg(args, char *));
	else if (c == 'p')
		n += print_point(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		n += print_num(va_arg(args, int));
	else if (c == 'u')
		n += print_unum(va_arg(args, unsigned int));
	else if (c == 'x')
		n += print_lowhexa(va_arg(args, long));
	else if (c == 'X')
		n += print_uphexa(va_arg(args, long));
	else if (c == '%')
		n += print_c('%');
	return (n);
}

int		ft_printf(const char *str, ... )
{
	va_list args;
	int		i;
	int		count;
	
	i = 0;
	va_start(args, str);
	if (!str)
		return (-1);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			count += check_type(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
