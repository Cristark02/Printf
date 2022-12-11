/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:47:42 by mmita             #+#    #+#             */
/*   Updated: 2022/12/11 19:26:42 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(va_list arg, char *str, int i)
{
	if (str)
}

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
