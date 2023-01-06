/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:34:09 by mmita             #+#    #+#             */
/*   Updated: 2022/12/25 11:40:48 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
