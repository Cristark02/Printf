/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:47:42 by mmita             #+#    #+#             */
/*   Updated: 2022/12/11 20:35:54 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(va_list arg, char *str, int i)
{
	if (*str == 'c')
		ft_printchar(va_arg(arg, int), i);
	else if (*str == 's')
		ft_printstr(va_arg(arg, char *), i);
	else if (*str == 'p')
	{
		ft_printstr("0x", i);
		ft_hex(va_arg(arg, unsigned long long), i, HEX_LOW_BASE);
	}
	else if (*str == 'd' || *str == 'i')
		ft_printnbr(va_arg(arg, int), i);
	else if (*str == 'u')
		ft_printunsig(va_arg(arg, unsigned int), i);
	else if (*str == 'x')
		ft_hex(va_arg(arg, unsigned int), i, HEX_LOW_BASE);
	else if (*str == 'X')
		ft_hex(va_arg(arg, unsigned int), i, HEX_UPP_BASE);
	else if (*str == '%')
		ft_printchar('%', i);
}

//CAMBIA ALGUNOS PARAMETROS Y NOMBRES, COMO PRINTUNSIG Y HEX_UPP

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	size_t	i;

	i = 0;
	va_start (arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_control(arg, (char *)str, &i);
		}
		else
		{
			ft_printchar(*str, &i);
		}
		str++;
	}
	va_end(arg);
	return (i);
}
