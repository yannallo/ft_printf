/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:03:15 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 18:57:37 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, int *ptr)
{
	long int	n;
	int			len_base;

	len_base = ft_strlen(base);
	if (nbr >= 0 && nbr < len_base)
		ft_putchar(base[nbr], ptr);
	else if (nbr < 0)
	{
		n = (unsigned int)nbr;
		ft_putchar('-', ptr);
		ft_putnbr_base(n * (-1), base, ptr);
	}
	else if (nbr > len_base - 1)
	{
		ft_putnbr_base(nbr / len_base, base, ptr);
		ft_putnbr_base(nbr % len_base, base, ptr);
	}
}
