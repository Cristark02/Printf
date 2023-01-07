/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:47:42 by mmita             #+#    #+#             */
/*   Updated: 2023/01/07 17:42:50 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(va_list arg, char *print, int i)
{
	if (*print == 'c')
		ft_printchar(va_arg(arg, int), i);
	else if (*print == 's')
		ft_printstr(va_arg(arg, char *), i);
	else if (*print == '%')
		ft_printchar(*print, i);
	else if ((*print == 'd') || (*print == 'i'))
		ft_printdori(va_arg(arg, int), i);
	else if (*print == 'u')
		ft_printunsig(va_arg(arg, int), i);
	else if (*print == 'x')
		ft_printhex(va_arg(arg, unsigned int), i);
	else if (*print == 'X')
		ft_printuphex(va_arg(arg, int), i);
	else if (*print == 'p')
		ft_printmemptr(va_arg(arg, unsigned long int), i);
}

int	ft_printf(char const *print, ...)
{
	va_list	arg;
	size_t	i;

	i = 0;
	va_start (arg, print);
	while (*print)
	{
		if (*print == '%')
		{
			print++;
			ft_control(arg, (char *)print, &i);
		}
		else
		{
			ft_printchar(*print, &i);
		}
		print++;
	}
	va_end(arg);
	return (i);
}
