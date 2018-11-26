/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:46:31 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/26 20:23:22 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putuint(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	unsigned int	nb;
	unsigned int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, unsigned int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	mag = (mag == 0 ? (inf->bkp > 0 || inf->width > 0) : mag);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putullint_aux((unsigned long long int)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int	ft_pf_putulint(va_list ap, t_pf_infos *inf)
{
	int					res;
	int					mag;
	unsigned long int	nb;
	unsigned long int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, unsigned long int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	mag = (mag == 0 ? (inf->bkp > 0 || inf->width > 0) : mag);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putullint_aux((unsigned long long int)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int	ft_pf_putullint(va_list ap, t_pf_infos *inf)
{
	int						res;
	int						mag;
	unsigned long long int	nb;
	unsigned long long int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, unsigned long long int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	mag = (mag == 0 ? (inf->bkp > 0 || inf->width > 0) : mag);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putullint_aux(nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int	ft_pf_putusint(va_list ap, t_pf_infos *inf)
{
	int					res;
	int					mag;
	unsigned short int	nb;
	unsigned short int	bkp;

	inf->bkp = inf->precision;
	nb = (unsigned short int)va_arg(ap, int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	mag = (mag == 0 ? (inf->bkp > 0 || inf->width > 0) : mag);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putullint_aux((unsigned long long int)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}

int	ft_pf_putucint(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	unsigned char	nb;
	unsigned char	bkp;

	inf->bkp = inf->precision;
	nb = (unsigned char)va_arg(ap, int);
	mag = (nb != 0 || (inf->precision == -1 && inf->width == -1));
	mag = (mag == 0 ? (inf->bkp > 0 || inf->width > 0) : mag);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag, 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putullint_aux((unsigned long long int)nb);
	res += ft_ending_format(inf, mag, 0);
	return (res);
}
