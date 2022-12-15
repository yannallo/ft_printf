/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:10:16 by yallo             #+#    #+#             */
/*   Updated: 2022/12/15 18:56:40 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(int c, int *ptr);
void	ft_putstr(char *s, int *ptr);
void	ft_putnbr_base(int nbr, char *base, int *ptr);
void	ft_putnbr(int nbr, int *ptr);
void	ft_putnbr_unsigned(unsigned int nbr, int *ptr);
void	ft_putaddr(unsigned int addr, int *ptr);

#endif