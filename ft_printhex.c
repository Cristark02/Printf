/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:45:01 by mmita             #+#    #+#             */
/*   Updated: 2023/01/07 16:13:02 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned int n, size_t *i)
{
	char	string[25];
	char	*base_character;
	int		j;

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
