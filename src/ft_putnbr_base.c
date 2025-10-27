/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:37:50 by yallo             #+#    #+#             */
/*   Updated: 2023/12/15 13:24:34 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

void	ft_putnbr_base(long long unsigned int nbr, char *base, int *count, int fd)
{
	size_t	size;

	size = ft_strlen(base);
	if (nbr > (size - 1))
		ft_putnbr_base((nbr / size), base, count, fd);
	ft_putchar(base[nbr % size], count, fd);
}
