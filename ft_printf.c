/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:32:03 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 17:54:34 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	check_arg(char c, va_list arg)
{
	ssize_t	count;

	count = 0;
	if (c == 'c' && count != -1)
		count = ft_putchar(va_arg(arg, int));
	if (c == 's' && count != -1)
		count = ft_putstr(va_arg(arg, char *));
	if (c == 'p' && count != -1)
		count = ft_putaddr(va_arg(arg, unsigned int));
	if ((c == 'd' || c == 'i') && count != -1)
		count = ft_putnbr(va_arg(arg, int));
	if (c == 'u' && count != -1)
		count = ft_putnbr_unsigned(va_arg(arg, unsigned int));
	if (c == 'x' && count != -1)
		count = ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
	if (c == 'X' && count != -1)
		count = ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
	if (c == '%' && count != -1)
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	ssize_t	count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += check_arg(format[i], arg);
		}
		else
			count += ft_putchar(format[i]);
		if (count == -1)
			return (-1);
		i++;
	}
	va_end(arg);
	return (count);
}
