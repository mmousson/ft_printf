/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 22:15:21 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/25 17:44:54 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_pf_putoctal_ui(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	unsigned int	nb;
	unsigned int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, unsigned int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	bkp = nb;
	while (bkp /= 8)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if (!(nb == 0 && (inf->bkp > 0 || inf->width > 0)))
		ft_pf_putoctal_ulli_aux((unsigned long long)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int		ft_pf_putoctal_uli(va_list ap, t_pf_infos *inf)
{
	int					res;
	int					mag;
	unsigned long int	nb;
	unsigned long int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, unsigned long int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	bkp = nb;
	while (bkp /= 8)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if (!(nb == 0 && (inf->bkp > 0 || inf->width > 0)))
		ft_pf_putoctal_ulli_aux((unsigned long long)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int		ft_pf_putoctal_ulli(va_list ap, t_pf_infos *inf)
{
	int						res;
	int						mag;
	unsigned long long int	nb;
	unsigned long long int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, unsigned long long int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	bkp = nb;
	while (bkp /= 8)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if (!(nb == 0 && (inf->bkp > 0 || inf->width > 0)))
		ft_pf_putoctal_ulli_aux(nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int		ft_pf_putoctal_usi(va_list ap, t_pf_infos *inf)
{
	int					res;
	int					mag;
	unsigned short int	nb;
	unsigned short int	bkp;

	inf->bkp = inf->precision;
	nb = (unsigned short)va_arg(ap, int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	bkp = nb;
	while (bkp /= 8)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if (!(nb == 0 && (inf->bkp > 0 || inf->width > 0)))
		ft_pf_putoctal_ulli_aux((unsigned long long)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int		ft_pf_putoctal_uci(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	unsigned char	nb;
	unsigned char	bkp;

	inf->bkp = inf->precision;
	nb = (unsigned char)va_arg(ap, int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	bkp = nb;
	while (bkp /= 8)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if (!(nb == 0 && (inf->bkp > 0 || inf->width > 0)))
		ft_pf_putoctal_ulli_aux((unsigned long long)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}
