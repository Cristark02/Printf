/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:34:09 by mmita             #+#    #+#             */
/*   Updated: 2023/01/07 17:42:30 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *print, size_t *i)
{
	if (!print)
		print = "(null)";
	while (*print)
	{
		ft_printchat(*print, i);
		print++;
	}
}
