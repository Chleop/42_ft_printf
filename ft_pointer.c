/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:19:34 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/04 18:19:36 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_ptr(uintptr_t ptr, int *j)
{
	uintptr_t	rest;

	if (ptr > 15)
	{
		ft_putnbr_ptr((ptr / 16), j);
		rest = (ptr % 16);
		if (rest > 9)
			ft_putchar(rest + 87);
		else
			ft_putchar(rest + 48);
	}
	else if (ptr > 9)
		ft_putchar(ptr + 87);
	else
		ft_putchar(ptr + 48);
	(*j)++;
}

void	ft_pointer(uintptr_t ptr, int *j)
{
	ft_putstr("0x");
	*j = *j + 2;
	ft_putnbr_ptr(ptr, j);
}
