/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:19:00 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/04 18:19:03 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int hex, int *j)
{
	int	rest;

	if (hex > 15)
	{
		ft_putnbr_hex((hex / 16), j);
		rest = (hex % 16);
		if (rest > 9)
			ft_putchar(rest + 87);
		else
			ft_putchar(rest + 48);
	}
	else if (hex > 9)
		ft_putchar(hex + 87);
	else
		ft_putchar(hex + 48);
	(*j)++;
}

void	ft_hexadecimal(unsigned int hex, int *j)
{
	ft_putnbr_hex(hex, j);
}
