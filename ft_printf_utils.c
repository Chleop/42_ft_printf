/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:20:12 by cproesch          #+#    #+#             */
/*   Updated: 2021/08/04 18:20:18 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}

void	ft_putnbr(int n, int *j)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		(*j) = (*j) + 11;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		(*j)++;
		n = -n;
		ft_putnbr(n, j);
	}
	else if (n > 9)
	{
		ft_putnbr((n / 10), j);
		ft_putchar((n % 10) + 48);
		(*j)++;
	}
	else
	{
		ft_putchar(n + 48);
		(*j)++;
	}
}
