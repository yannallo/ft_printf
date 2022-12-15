/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:24:00 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 16:51:33 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr_unsigned(unsigned int nbr)
{
	ssize_t		count;

	count = 0;
	if (nbr >= 0 && nbr < 10)
		count += ft_putchar(nbr + '0');
	else
	{
		count = ft_putnbr_unsigned(nbr / 10);
		count += ft_putnbr_unsigned(nbr % 10);
	}
	return (count);
}
