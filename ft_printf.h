/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrown <sabrown@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 21:55:56 by sabrown           #+#    #+#             */
/*   Updated: 2025/06/05 15:54:07 by sabrown          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		check_type(char c, va_list args);
int		print_c(char c);
int		print_str(char *str);
int		print_point(void *point);
int		print_num(int n);
int		print_unum(unsigned int n);
int		print_hexa(unsigned int n, char c);
int		print_phexa(unsigned long n);

#endif