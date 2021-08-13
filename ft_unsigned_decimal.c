/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:20:29 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/04 18:20:32 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *j)
{
	if (n > 9)
	{
		ft_putnbr_unsigned((n / 10), j);
		ft_putchar((n % 10) + 48);
	}
	else
		ft_putchar(n + 48);
	(*j)++;
}

void	ft_unsigned_decimal(unsigned int u, int *j)
{
	ft_putnbr_unsigned(u, j);
}
