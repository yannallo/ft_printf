/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:54:50 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 18:00:38 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putaddr(unsigned int addr)
{
	ssize_t	count;

	count = ft_putstr("0x");
	count += ft_putnbr_base(addr, "0123456789abcdef");
	return (count);
}
