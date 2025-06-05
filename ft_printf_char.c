/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 01:15:38 by sabrown           #+#    #+#             */
/*   Updated: 2025/06/04 01:15:38 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (print_str("(null)"));
	while (str[i])
	{
		print_c(str[i]);
		i++;
	}
	return (i);
}
