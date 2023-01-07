/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdori.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:42:37 by mmita             #+#    #+#             */
/*   Updated: 2023/01/07 17:42:54 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printdori(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_printdori(n / 10, i);
		ft_printchars('8', i);
	}
	else if (n < 0)
	{
		ft_printchar ('-', i);
		ft_printdori (-n, i);
	}
	else
	{
		if (n >= 10)
			ft_printdori(n / 10, i);
		ft_printchar('0' + n % 10, i);
	}
}
