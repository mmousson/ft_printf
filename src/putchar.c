/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:27:15 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/30 20:47:49 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(t_pf_infos *inf)
{
	int		res;
	char	padder;

	res = 0;
	if (inf->justify == -1)
	{
		padder = (inf->zero_pad == 1) ? '0' : ' ';
		while ((inf->width)-- > 1)
			res += ft_w_buf(inf->buf, &padder, 1);
	}
	if (inf->bkp == -10)
	{
		while ((inf->width)-- > 1)
			res += ft_w_buf(inf->buf, " ", 1);
	}
	inf->bkp = -10;
	return (res);
}

int			ft_pf_putchar(va_list ap, t_pf_infos *inf)
{
	int				res;
	unsigned char	c;

	res = 0;
	res += ft_format(inf);
	c = (unsigned char)va_arg(ap, int);
	res += ft_w_buf(inf->buf, (char *)(&c), 1);
	res += ft_format(inf);
	return (res);
}
