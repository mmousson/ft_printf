/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 06:49:35 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/24 10:32:57 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_pf_putint(va_list ap, t_pf_infos *inf)
{
	int	res;
	int	mag;
	int	nb;
	int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, int);
	mag = (nb != 0 || inf->precision == -1);
	bkp = nb;
	inf->plus = (nb < 0) ? -1 : inf->plus;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += (int)write(1, "-", nb < 0);
	res += ft_pf_format_output(inf, mag, nb < 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putllint_aux((long long int)nb);
	res += ft_ending_format(inf, mag, nb < 0);
	return (res);
}

int		ft_pf_putlint(va_list ap, t_pf_infos *inf)
{
	int			res;
	int			mag;
	long int	nb;
	long int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, long int);
	mag = (nb != 0 || inf->precision == -1);
	bkp = nb;
	inf->plus = (nb < 0) ? -1 : inf->plus;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += (int)write(1, "-", nb < 0);
	res += ft_pf_format_output(inf, mag, nb < 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putllint_aux((long long int)nb);
	res += ft_ending_format(inf, mag, nb < 0);
	return (res);
}

int		ft_pf_putllint(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	long long int	nb;
	long long int	bkp;

	inf->bkp = inf->precision;
	nb = va_arg(ap, long long int);
	mag = (nb != 0 || inf->precision == -1);
	bkp = nb;
	inf->plus = (nb < 0) ? -1 : inf->plus;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += (int)write(1, "-", nb < 0);
	res += ft_pf_format_output(inf, mag, nb < 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putllint_aux(nb);
	res += ft_ending_format(inf, mag, nb < 0);
	return (res);
}

int		ft_pf_putsint(va_list ap, t_pf_infos *inf)
{
	int			res;
	int			mag;
	short int	nb;
	short int	bkp;

	inf->bkp = inf->precision;
	nb = (short int)(va_arg(ap, int));
	mag = (nb != 0 || inf->precision == -1);
	bkp = nb;
	inf->plus = (nb < 0) ? -1 : inf->plus;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += (int)write(1, "-", nb < 0);
	res += ft_pf_format_output(inf, mag, nb < 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putllint_aux((long long int)nb);
	res += ft_ending_format(inf, mag, nb < 0);
	return (res);
}

int		ft_pf_putcint(va_list ap, t_pf_infos *inf)
{
	int		res;
	int		mag;
	char	nb;
	char	bkp;

	inf->bkp = inf->precision;
	nb = (char)va_arg(ap, int);
	mag = (nb != 0 || inf->precision == -1);
	bkp = nb;
	inf->plus = (nb < 0) ? -1 : inf->plus;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += (int)write(1, "-", nb < 0);
	res += ft_pf_format_output(inf, mag, nb < 0);
	if ((inf->bkp == 0 && nb != 0) || (inf->bkp != 0))
		ft_pf_putllint_aux((long long int)nb);
	res += ft_ending_format(inf, mag, nb < 0);
	return (res);
}
