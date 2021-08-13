/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_maj.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:29:23 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/05 18:29:29 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex_maj(unsigned int hex, int *j)
{
	int	rest;

	if (hex > 15)
	{
		ft_putnbr_hex_maj((hex / 16), j);
		rest = (hex % 16);
		if (rest > 9)
			ft_putchar(rest + 55);
		else
			ft_putchar(rest + 48);
	}
	else if (hex > 9)
		ft_putchar(hex + 55);
	else
		ft_putchar(hex + 48);
	(*j)++;
}

void	ft_hexadecimal_maj(unsigned int hex, int *j)
{
	ft_putnbr_hex_maj(hex, j);
}
