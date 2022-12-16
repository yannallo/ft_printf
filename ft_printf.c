/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:32:03 by yallo             #+#    #+#             */
/*   Updated: 2022/12/16 14:57:48 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_arg(char c, va_list arg, int *ptr)
{
	if (c == 'c' && *ptr != -1)
		ft_putchar(va_arg(arg, int), ptr);
	if (c == 's' && *ptr != -1)
		ft_putstr(va_arg(arg, char *), ptr);
	if (c == 'p' && *ptr != -1)
		ft_putaddr(va_arg(arg, void *), ptr);
	if ((c == 'd' || c == 'i') && *ptr != -1)
		ft_putnbr(va_arg(arg, int), ptr);
	if (c == 'u' && *ptr != -1)
		ft_putnbr_unsigned(va_arg(arg, unsigned int), ptr);
	if (c == 'x' && *ptr != -1)
		ft_putnbr_base(va_arg(arg, int), "0123456789abcdef", ptr);
	if (c == 'X' && *ptr != -1)
		ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF", ptr);
	if (c == '%' && *ptr != -1)
		ft_putchar('%', ptr);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ptr;
	va_list	arg;

	i = 0;
	ptr = 0;
	va_start(arg, format);
	while (format[i] != '\0' && ptr != -1)
	{
		if (format[i] == '%')
		{
			i++;
			check_arg(format[i], arg, &ptr);
		}
		else
			ft_putchar(format[i], &ptr);
		i++;
	}
	va_end(arg);
	return (ptr);
}
