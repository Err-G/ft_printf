/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:40:41 by ecarvalh          #+#    #+#             */
/*   Updated: 2023/10/12 20:26:44 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format) {
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_char(va_arg(args, int));
	if (format == 's')
		len += ft_print_str(va_arg(args, char *));
	return (len);
}

int ft_printf(const char *format, ...)
{
	va_list args;
	int	len;
	int	i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			len += ft_format(args, format[++i]);
		else
			len += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
