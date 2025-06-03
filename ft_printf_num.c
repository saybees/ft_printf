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

int		print_num(int n)
{
	char	nb;

	if (n == -2147483648)
	{
		print_str("-2147483648");
		return ;
	}
	if (n < 0)
	{
		n = -n;
		print_c('-');
	}
	if (n >= 10)
		print_num((n / 10));
	nb = n % 10 + '0';
	print_c(nb);
}

int		print_unum()
{

}

int		print_lowhexa()
{

}

int		print_uphexa()
{

}

int		print_point(void *point)
{

}
