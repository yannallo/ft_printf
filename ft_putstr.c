/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:57 by yallo             #+#    #+#             */
/*   Updated: 2022/12/16 14:55:42 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *ptr)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", ptr);
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], ptr);
		if (*ptr == -1)
			return ;
		i++;
	}
}
