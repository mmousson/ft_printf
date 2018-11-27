/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:39:25 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/27 01:28:04 by mmousson         ###   ########.fr       */
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
			res += (int)write(1, &padder, 1);
	}
	if (inf->bkp == -10)
	{
		while ((inf->width)-- - length > 0)
			res += (int)write(1, " ", 1);
	}
	inf->bkp = -10;
	return (res);
}

int			ft_pf_putstr(va_list ap, t_pf_infos *inf)
{
	int			size;
	size_t		len;
	const char	*str;

	size = 0;
	str = va_arg(ap, const char *);
	len = ft_strlen(str);
	len = inf->precision > -1 ? ft_min(inf->precision, len) : len;
	size += ft_format(inf, len);
	size += (int)write(1, str, inf->precision == -1
				? len : ft_min(inf->precision, len));
	size += ft_format(inf, len);
	return (size);
}
