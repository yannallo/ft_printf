/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:24:00 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 18:58:25 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nbr, int *ptr)
{
	if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + '0', ptr);
	else
	{
		ft_putnbr_unsigned(nbr / 10, ptr);
		ft_putnbr_unsigned(nbr % 10, ptr);
	}
}
