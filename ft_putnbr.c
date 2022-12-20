/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 01:06:37 by yallo             #+#    #+#             */
/*   Updated: 2022/12/20 01:06:37 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

void	ft_putnbr(int nbr, int *count)
{
	char *base = "0123456789";
	if (nbr == INT_MAX)
		return (ft_putstr("-2147483648", count));
	else if (nbr < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(-nbr, count);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10, count);
		ft_putchar(base[nbr % 10], count);
	}
	else if (nbr >= 0 && nbr < 10)
		ft_putchar(nbr + '0', count);
}

int main()
{
	int *count;
	count[0] = 0;
	ft_putnbr(7, count);
}