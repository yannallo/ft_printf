/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:10:16 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 18:00:21 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

ssize_t	ft_putchar(int c);
ssize_t	ft_putstr(char *s);
ssize_t	ft_putnbr_base(int nbr, char *base);
ssize_t	ft_putnbr(int nbr);
ssize_t	ft_putnbr_unsigned(unsigned int nbr);
ssize_t	ft_putaddr(unsigned int addr);

#endif