/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:32:03 by yallo             #+#    #+#             */
/*   Updated: 2022/12/19 13:36:05 by yallo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_arg(char c, va_list arg, int *count)
{
	if (c == 'c' && *count != -1)
		ft_putchar(va_arg(arg, int), count);
	if (c == 's' && *count != -1)
		ft_putstr(va_arg(arg, char *), count);
	if (c == 'p' && *count != -1)
		ft_putnbr_base();
	if ((c == 'd' || c == 'i') && *count != -1)
		ft_putnbr(va_arg(arg, int), count);
	if (c == 'u' && *count != -1)
		ft_putnbr_unsigned(va_arg(arg, unsigned int), count);
	if (c == 'x' && *count != -1)
		ft_putnbr_base(va_arg(arg, int), "0123456789abcdef", count);
	if (c == 'X' && *count != -1)
		ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF", count);
	if (c == '%' && *count != -1)
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i] != '\0' && count != -1)
	{
		if (format[i] == '%')
		{
			i++;
			check_arg(format[i], arg, &count);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(arg);
	return (count);
}
