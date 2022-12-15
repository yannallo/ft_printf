/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:05:02 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 19:00:22 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *ptr)
{
	if (nbr == -2147483648)
		return (ft_putstr("-2147483648", ptr));
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + '0', ptr);
	else if (nbr < 0)
	{
		ft_putchar('-', ptr);
		ft_putnbr(nbr * (-1), ptr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10, ptr);
		ft_putnbr(nbr % 10, ptr);
	}
}
