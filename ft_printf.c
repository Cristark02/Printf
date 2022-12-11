/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:47:42 by mmita             #+#    #+#             */
/*   Updated: 2022/12/11 20:43:40 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(va_list arg, char *str, int i)
{
	if (*str == 'c')
		ft_strchar(va_arg(arg, int), i);
	else if (*str == 's')
		ft_strstr(va_arg(arg, char *), i);
	else if (*str == '%')
		ft_strchar(*str, i);
	else if ((*str == 'd') || (*str == 'i'))
		ft_strdori(va_arg(arg, int), i);
	else if (*str == 'u')
		ft_strunsig(va_arg(arg, int), i);
	else if (*str == 'x')
		ft_strhex(va_arg(arg, unsigned int), i);
	else if (*str == 'X')
		ft_struphex(va_arg(arg, int), i);
	else if (*str == 'p')
		ft_strmemptr(va_arg(arg, unsigned long int), i);
}

int	ft_strf(char const *str, ...)
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
			ft_strchar(*str, &i);
		}
		str++;
	}
	va_end(arg);
	return (i);
}
