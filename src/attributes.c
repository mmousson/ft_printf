/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attributes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 01:25:57 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/29 08:58:44 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_pf_initiate_attributes(t_pf_infos *inf)
{
	inf->space = -1;
	inf->justify = -1;
	inf->plus = -1;
	inf->precision = -1;
	inf->sharp = -1;
	inf->width = -1;
	inf->zero_pad = -1;
	inf->is_x = -1;
	inf->is_b_x = -1;
}

void		ft_pf_parse_attributes(t_pf_infos *inf, char conv)
{
	inf->conversion = conv;
	if (inf->zero_pad > 0)
	{
		if (inf->precision > -1 && ft_pf_c_in_str(inf->conversion, "_diouxX"))
			inf->zero_pad = -1;
		if (inf->justify == 1)
			inf->zero_pad = -1;
	}
	if (inf->precision == -1)
		inf->precision = inf->conversion == 'f' ? 6 : -1;
	if (inf->plus == 1 && !ft_pf_c_in_str(inf->conversion, "_di"))
		inf->plus = -1;
	if (inf->plus == 1 && inf->space == 1)
		inf->space = -1;
	if (inf->space && !ft_pf_c_in_str(inf->conversion, "_di"))
		inf->space = -1;
}

void		ft_pf_get_attributes(t_pf_infos *inf, const char *str)
{
	inf->justify = (*str == '-') ? 1 : inf->justify;
	inf->zero_pad = (*str == '0' && inf->precision == -1
						&& inf->width == -1) ? 1 : inf->zero_pad;
	inf->sharp = (*str == '#') ? 1 : inf->sharp;
	inf->plus = (*str == '+') ? 1 : inf->plus;
	inf->space = (*str == ' ') ? 1 : inf->space;
	if (*str == '.')
		inf->precision = ft_atoi(str + 1);
	if (ft_isdigit(*str) && *str != '0' && inf->precision == -1
			&& inf->width == -1)
		inf->width = ft_atoi(str);
}
