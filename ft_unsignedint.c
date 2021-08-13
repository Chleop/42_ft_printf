/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:20:37 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/06 15:20:40 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsignedint(char c, unsigned int ui, int *j)
{
	if (c == 'u')
		ft_unsigned_decimal(ui, j);
	else if (c == 'x')
		ft_hexadecimal(ui, j);
	else if (c == 'X')
		ft_hexadecimal_maj(ui, j);
}
