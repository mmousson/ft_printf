/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:28:09 by mmousson          #+#    #+#             */
/*   Updated: 2018/12/05 17:27:47 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_sharp(t_pf_infos *inf, int size_of_var)
{
	int res;

	res = 0;
	inf->sharp = -1;
	if (inf->is_x == 1 && size_of_var)
		res = (int)write(1, "0x", 2);
	else if (inf->is_b_x == 1 && size_of_var)
		res = (int)write(1, "0X", 2);
	else if (size_of_var)
		res = (int)write(1, "0", 1);
	return (res);
}

int			ft_ending_format(t_pf_infos *inf, int size_of_var, int is_neg)
{
	int res;

	res = 0;
	if (inf->justify > 0)
	{
		while (((inf->width)-- - size_of_var - (inf->plus == 1) - is_neg) > 0)
				res += (int)write(1, " ", 1);
	}
	return (res);
}

int			ft_pf_format_output(t_pf_infos *inf, int size_of_var, int is_neg)
{
	int res;

	res = 0;
	if (inf->plus == 1 && !(size_of_var < inf->width))
		res += (int)write(1, "+", 1);
	if (inf->precision > -1 && inf->width < 0)
		while (((inf->precision)-- - size_of_var) > 0)
			res += (int)write(1, "0", 1);
	else if(inf->space == 1 && inf->plus < 0 && 
				ft_pf_c_in_str(inf->conversion, "_dif"))
		res += (int)write(1, " ", 1);
	else if (inf->width > -1)
	{
		if (inf->width > 0 && inf->sharp == 1 && (inf->width < size_of_var))
			res += ft_format_sharp(inf, size_of_var);
		if (inf->zero == 1 && inf->justify == -1)
			while (((inf->width)-- - size_of_var - (inf->plus == 1 || is_neg) * (1 + ((inf->is_x == 1) || (inf->is_b_x == 1)) && size_of_var)) > (inf->sharp != -1) ? 1 : 0)
				res += (int)write(1, inf->precision == 0 ? " " : "0", 1);
		else if (inf->justify == -1)
		{
			inf->justify = inf->width;
			while (((inf->width)-- - size_of_var - (inf->plus > 0)) - is_neg > ((inf->sharp != -1) ? 1 + (inf->is_x == 1 || inf->is_b_x == 1) : 0))
				res += (int)write(1, inf->precision + size_of_var >= inf->width ? "0" : " ", 1);
			if (inf->plus == 1 && (size_of_var < inf->justify))
				res += (int)write(1, "+", 1);
			inf->justify = -1;
		}
		if (inf->width > 0 && inf->sharp == 1)
			res += ft_format_sharp(inf, size_of_var);
	}
	else if (inf->sharp == 1)
		res += ft_format_sharp(inf, size_of_var);
	return (res);
}
