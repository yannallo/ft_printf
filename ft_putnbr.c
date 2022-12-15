/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:05:02 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 17:42:55 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr(int nbr)
{
	ssize_t		count;

	count = 0;
	if (nbr == -2147483648)
	{
		if (!write(1, "-2147483648", 11))
			return (-1);
		return (11);
	}
	if (nbr >= 0 && nbr < 10)
		count += ft_putchar(nbr + '0');
	else if (nbr < 0)
	{
		count = ft_putchar('-');
		count += ft_putnbr(nbr * (-1));
	}
	else if (nbr > 9)
	{
		count = ft_putnbr(nbr / 10);
		count += ft_putnbr(nbr % 10);
	}
	return (count);
}
