/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:28:09 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/24 10:13:37 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	ft_format_sharp(t_pf_infos *inf, int size_of_var)
{
	int res;

	res = 0;
	if (inf->is_x == 1 && size_of_var)
		res = (int)write(1, "0x", 2);
	else if (inf->is_b_x == 1 && size_of_var)
		res = (int)write(1, "0X", 2);
	else if (size_of_var)
		res = (int)write(1, "0", 1);
	return (res);
}

void		ft_print_attributes(t_pf_infos *inf)
{
	printf("space = %d\n", inf->space);
	printf("sharp = %d\n", inf->sharp);
	printf("zero pad = %d\n", inf->zero_pad);
	printf("justify = %d\n", inf->justify);
	printf("plus = %d\n", inf->plus);
	printf("conversion = %c\n", inf->conversion);
	printf("is_x = %d\n", inf->is_x);
	printf("is_b_x = %d\n", inf->is_b_x);
	printf("width = %d\n", inf->width);
	printf("precision = %d\n", inf->precision);
	printf("bkp = %d\n", inf->bkp);
}

int			ft_ending_format(t_pf_infos *inf, int size_of_var, int is_neg)
{
	int res;

	res = 0;
	if (inf->justify)
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
	// ft_print_attributes(inf);
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
		if (inf->zero_pad == 1 && inf->justify == -1)
			while (((inf->width)-- - size_of_var - (inf->plus == 1 || is_neg)) > 0)
				res += (int)write(1, inf->precision == 0 ? " " : "0", 1);
		else if (inf->justify == -1)
		{
			inf->justify = inf->width;
			while (((inf->width)-- - size_of_var - (inf->plus)) > (inf->sharp != -1) ? 1 : 0)
				res += (int)write(1, " ", 1);
			if (inf->plus && (size_of_var < inf->justify))
				res += (int)write(1, "+", 1);
		}
		if (inf->width > 0 && inf->sharp == 1)
			res += (int)write(1, "0", 1);
	}
	else if (inf->sharp == 1)
		res += ft_format_sharp(inf, size_of_var);
	return (res);
}
