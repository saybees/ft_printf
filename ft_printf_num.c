/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:15:35 by sabrown           #+#    #+#             */
/*   Updated: 2025/06/04 01:15:35 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_num(int n)
{
	char	nb;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (print_str("-2147483648"));
	if (n < 0)
	{
		n = -n;
		i++;
		print_c('-');
	}
	if (n >= 10)
		i += print_num((n / 10));
	nb = n % 10 + '0';
	print_c(nb);
	i++;
	return (i);
}

int	print_unum(unsigned int n)
{
	char	nb;
	int		i;

	i = 0;
	if (n >= 10)
		i += print_unum((n / 10));
	nb = n % 10 + '0';
	print_c(nb);
	i++;
	return (i);
}

int	print_hexa(unsigned int n, char c)
{
	int		i;
	char	*charset;

	i = 0;
	if (c == 'x')
		charset = "0123456789abcdef";
	else
		charset = "0123456789ABCDEF";
	if (n >= 16)
		i += print_hexa((n / 16), c);
	print_c(charset[n % 16]);
	i++;
	return (i);
}

int	print_phexa(unsigned long n)
{
	int		i;
	char	*charset;

	i = 0;
	charset = "0123456789abcdef";
	if (n >= 16)
		i += print_phexa((n / 16));
	print_c(charset[n % 16]);
	i++;
	return (i);
}

int	print_point(void *point)
{
	int			i;

	i = 0;
	if (!point)
		return (print_str("(nil)"));
	i += print_str("0x");
	i += print_phexa((unsigned long)point);
	return (i);
}
