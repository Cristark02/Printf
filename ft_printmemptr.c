/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:54:05 by mmita             #+#    #+#             */
/*   Updated: 2023/01/07 17:42:35 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned long int n, size_t *i)
{
	char	string[25];
	char	*base_character;
	int		j;

	base_character = "0123456789abcdef";
	if (n == 0)
	{
		ft_printchar('0', i);
		return ;
	}
	while (n != 0)
	{
		string[j] = base_character [n % 16];
		n = n / 16;
		j++;
	}
	while (j--)
		ft_printchar(string[j], i);
}

void	ft_printmemptr(unsigned long int n, size_t *i)
{
	ft_printchar('0x', i);
	ft_printhex(n, i);
}
