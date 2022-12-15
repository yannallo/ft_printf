/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:03:15 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 17:43:24 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static ssize_t	ft_strlen(char *str)
{
	ssize_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

ssize_t	ft_putnbr_base(int nbr, char *base)
{
	ssize_t		count;
	long int	n;
	int			len_base;

	count = 0;
	len_base = ft_strlen(base);
	if (nbr >= 0 && nbr < len_base)
		count += ft_putchar(base[nbr]);
	else if (nbr < 0)
	{
		n = (unsigned int)nbr;
		count = ft_putchar('-');
		count += ft_putnbr_base(n * (-1), base);
	}
	else if (nbr > len_base - 1)
	{
		count = ft_putnbr_base(nbr / len_base, base);
		count += ft_putnbr_base(nbr % len_base, base);
	}
	return (count);
}

/*int main()
{
    unsigned int i = -2147483648;
    ft_putnbr_base(i, "0123456789");
}*/