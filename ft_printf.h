/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:00:40 by cproesch          #+#    #+#             */
/*   Updated: 2021/07/08 18:00:49 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <inttypes.h>

int		ft_strlen(const char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n, int *j);
void	ft_char(int arg, int *j);
void	ft_string(char *s, int *j);
void	ft_decimal_integer(int n, int *j);
void	ft_unsignedint(char c, unsigned int hex, int *j);
void	ft_unsigned_decimal(unsigned int u, int *j);
void	ft_hexadecimal(unsigned int hex, int *j);
void	ft_hexadecimal_maj(unsigned int hex, int *j);
void	ft_pointer(uintptr_t ptr, int *j);
int		ft_printf(const char *str, ...);

#endif
