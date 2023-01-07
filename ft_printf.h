/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmita <mmita@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:52:10 by mmita             #+#    #+#             */
/*   Updated: 2023/01/07 17:13:29 by mmita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *print, ...);
void	ft_printchar(char c, size_t *i);
void	ft_printstr(char *print, size_t *i);
void	ft_printunsig(unsigned int n, size_t *i);
void	ft_printhex(unsigned int n, size_t *i);
void	ft_printuphex(unsigned int n, size_t *i);
void	ft_printmemptr(unsigned long int n, size_t *i);

#endif