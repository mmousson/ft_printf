/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:04:41 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/30 20:50:08 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_justify(int width, int already_written, t_pf_infos *inf)
{
	int		res;

	res = 0;
	while (already_written++ < width)
		res += ft_w_buf(inf->buf, " ", 1);
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
			res += ft_w_buf(inf->buf, inf->plus == 1 ? "+" : " ", 1);
		while ((inf->width)-- - magnitude > 0 - (inf->precision > magnitude
					|| (inf->precision == 0 && is_nul)))
			res += ft_w_buf(inf->buf, &pad, 1);
	}
	else if (inf->precision == -1)
		inf->width -= magnitude;
	return (res);
}

static int	ft_format(t_pf_infos *inf, int magnitude, int is_nul)
{
	int		res;

	res = 0;
	if (inf->width > inf->precision && (inf->precision) > 0 && (inf->width) > 0)
		(inf->width) += (magnitude < inf->precision);
	if (inf->width > -1)
		res += ft_handle_width(inf, magnitude, is_nul);
	if (inf->space == 1)
		res += ft_w_buf(inf->buf, " ", 1);
	else if (inf->plus == 1 && inf->zero_pad == -1)
		res += ft_w_buf(inf->buf, "+", 1);
	if (inf->precision > 0)
		while ((inf->precision)-- - magnitude > 0)
			res += ft_w_buf(inf->buf, "0", 1);
	return (res);
}

static void	ft_put_it(unsigned long long int nb, t_pf_infos *inf)
{
	if (nb >= 8)
		ft_put_it(nb / 8, inf);
	ft_reflect('0' + nb % 8, inf);
}

int			ft_pf_putoctal_ulli_aux(unsigned long long int nb, t_pf_infos *inf)
{
	int res;
	int mag;
	int w;

	w = inf->width;
	mag = ft_unsigned_magnitude(nb, 8);
	if (inf->precision > -1 && inf->sharp == 1)
		(inf->precision)--;
	inf->bkp = inf->precision;
	res = (nb == 0 && inf->precision == 0) ? 0 : mag;
	res += ft_format(inf, mag, nb == 0);
	if ((inf->bkp != 0 && nb == 0) || (nb != 0))
	{
		if (inf->sharp == 1 && nb != 0)
			res += ft_w_buf(inf->buf, "0", 1);
		ft_put_it(nb, inf);
	}
	if (inf->justify == 1)
		res += ft_justify(w, res, inf);
	return (res);
}
