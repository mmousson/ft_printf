/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:04:41 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/27 07:24:48 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	ft_justify(t_pf_infos *inf)
{
	int		res;

	res = 0;
	while ((inf->width)-- > 0)
		res += (int)write(1, " ", 1);
	return (res);
}

static int	ft_handle_width(t_pf_infos *inf, int magnitude, int is_nul)
{
	int		res;
	char	pad;

	res = 0;
	pad = inf->zero_pad == 1 ? '0' : ' ';
	inf->width -= (inf->space == 1) + (inf->sharp == 1) * !is_nul;
	if (inf->precision > -1 && inf->precision > magnitude)
		magnitude = ft_max(inf->precision + 1, magnitude);
	inf->width -= (inf->justify == 1 && inf->precision > -1)
						? inf->precision : 0;
	if (inf->justify == -1)
	{
		if (inf->zero_pad == 1 && ((inf->plus == 1) || inf->space == 1))
			res += (int)write(1, inf->plus == 1 ? "+" : " ", 1);
		while ((inf->width)-- - magnitude > 0 - (inf->precision > magnitude
					|| (inf->precision == 0 && is_nul)))
			res += (int)write(1, &pad, 1);
	}
	else if (inf->precision == -1)
		inf->width -= magnitude;
	return (res);
}

static int	ft_format(t_pf_infos *inf, int magnitude, int is_nul)
{
	int		res;

	res = 0;
	if (inf->width > -1)
		res += ft_handle_width(inf, magnitude, is_nul);
	if (inf->space == 1)
		res += (int)write(1, " ", 1);
	else if (inf->plus == 1 && inf->zero_pad == -1)
		res += (int)write(1, "+", 1);
	if (inf->precision > 0)
		while ((inf->precision)-- - magnitude > 0)
			res += (int)write(1, "0", 1);
	return (res);
}

static void	ft_put_it(unsigned long long int nb)
{
	if (nb >= 8)
		ft_put_it(nb / 8);
	ft_putchar('0' + nb % 8);
}

int			ft_pf_putoctal_ulli_aux(unsigned long long int nb, t_pf_infos *inf)
{
	int res;

	if (inf->precision > -1 && inf->sharp == 1)
		(inf->precision)--;
	inf->bkp = inf->precision;
	res = (nb == 0 && inf->precision == 0) ? 0 : ft_unsigned_magnitude(nb, 8);
	res += ft_format(inf, ft_unsigned_magnitude(nb, 8), nb == 0);
	if ((inf->bkp != 0 && nb == 0) || (nb != 0))
	{
		if (inf->sharp == 1 && nb != 0)
			res += (int)write(1, "0", 1);
		ft_put_it(nb);
	}
	if (inf->justify == 1)
		res += ft_justify(inf);
	return (res);
}
