/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:54:50 by yallo             #+#    #+#             */
/*   Updated: 2022/12/16 15:12:06 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr(void *ptr, int *count)
{
	ft_putstr("0x", count);
	ft_putnbr_base((long unsigned int)ptr, "0123456789abcdef", count);
}
