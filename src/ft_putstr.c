/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:57 by yallo             #+#    #+#             */
/*   Updated: 2023/10/20 01:05:11 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count, int fd)
{
	if (!s)
	{
		ft_putstr("(null)", count, fd);
		return ;
	}
	while (*s)
	{
		ft_putchar(*s, count, fd);
		s++;
	}
}
