/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cproesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:58:24 by cproesch          #+#    #+#             */
/*   Updated: 2021/07/08 17:58:30 by cproesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse(va_list arg, const char *str, int *j)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ft_char('%', j);
			else if (str[i] == 'c')
				ft_char(va_arg(arg, int), j);
			else if (str[i] == 's')
				ft_string(va_arg(arg, char *), j);
			else if ((str[i] == 'd') || (str[i] == 'i'))
				ft_decimal_integer(va_arg(arg, int), j);
			else if ((str[i] == 'u') || (str[i] == 'x') || (str[i] == 'X'))
				ft_unsignedint(str[i], va_arg(arg, unsigned int), j);
			else if (str[i] == 'p')
				ft_pointer((uintptr_t)va_arg(arg, void *), j);
		}
		else
			ft_char(str[i], j);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list		arg;
	int			j;

	j = 0;
	va_start(arg, str);
	ft_parse(arg, str, &j);
	va_end(arg);
	return (j);
}
