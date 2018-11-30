/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:39:25 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/30 20:48:05 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(t_pf_infos *inf, int length)
{
	int		res;
	char	padder;

	res = 0;
	if (inf->justify == -1)
	{
		padder = inf->zero_pad == 1 ? '0' : ' ';
		while ((inf->width)-- - length > 0)
			res += ft_w_buf(inf->buf, &padder, 1);
	}
	if (inf->bkp == -10)
	{
		while ((inf->width)-- - length > 0)
			res += ft_w_buf(inf->buf, " ", 1);
	}
	inf->bkp = -10;
	return (res);
}

static int	ft_nulstr(t_pf_infos *inf)
{
	int		ret;
	char	pad;

	if (inf->precision == -1 && inf->width == -1)
		return (ft_w_buf(inf->buf, "(null)", 6));
	ret = 0;
	pad = inf->zero_pad == 1 ? '0' : ' ';
	while ((inf->width)-- > (inf->precision))
		ret += ft_w_buf(inf->buf, &pad, 1);
		ret += ft_w_buf(inf->buf, "(null)", ft_min(inf->precision, 6));
	return (ret);
}

int			ft_pf_putstr(va_list ap, t_pf_infos *inf)
{
	int			size;
	size_t		len;
	const char	*str;

	size = 0;
	str = va_arg(ap, const char *);
	if (str == NULL)
		return (ft_nulstr(inf));
	len = ft_strlen(str);
	len = inf->precision > -1 ? ft_min(inf->precision, len) : len;
	size += ft_format(inf, len);
	size += ft_w_buf(inf->buf, (char *)str, inf->precision == -1
				? len : ft_min(inf->precision, len));
	size += ft_format(inf, len);
	return (size);
}
