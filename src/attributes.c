/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attributes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 01:25:57 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/25 16:35:51 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_pf_infos	*ft_pf_initiate_attributes(void)
{
	t_pf_infos *ret;

	if (!(ret = (t_pf_infos *)ft_memalloc(sizeof(t_pf_infos))))
		return (NULL);
	ret->space = -1;
	ret->justify = -1;
	ret->plus = -1;
	ret->precision = -1;
	ret->sharp = -1;
	ret->width = -1;
	ret->zero_pad = -1;
	ret->is_x = -1;
	ret->is_b_x = -1;
	return (ret);
}

void		ft_pf_get_attributes(t_pf_infos *inf, const char *str)
{
	inf->justify = (*str == '-') ? 1 : inf->justify;
	inf->zero_pad = (*str == '0' && inf->precision == -1) ? 1 : inf->zero_pad;
	inf->sharp = (*str == '#') ? 1 : inf->sharp;
	inf->plus = (*str == '+') ? 1 : inf->plus;
	inf->space = (*str == ' ') ? 1 : inf->space;
	if (*str == '.')
		inf->precision = ft_atoi(str + 1);
	if (ft_isdigit(*str) && *str != '0' && inf->precision == -1
			&& inf->width == -1)
		inf->width = ft_atoi(str);
}
