/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:46:31 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:51:11 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putuint(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	unsigned int	nb;
	unsigned int	bkp;

	mag = 1;
	nb = va_arg(ap, unsigned int);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag);
	ft_pf_putullint_aux((unsigned long long int)nb);
	return (res);
}

int	ft_pf_putulint(va_list ap, t_pf_infos *inf)
{
	int					res;
	int					mag;
	unsigned long int	nb;
	unsigned long int	bkp;

	mag = 1;
	nb = va_arg(ap, unsigned long int);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag);
	ft_pf_putullint_aux((unsigned long long int)nb);
	return (res);
}

int	ft_pf_putullint(va_list ap, t_pf_infos *inf)
{
	int						res;
	int						mag;
	unsigned long long int	nb;
	unsigned long long int	bkp;

	mag = 1;
	nb = va_arg(ap, unsigned long long int);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag);
	ft_pf_putullint_aux(nb);
	return (res);
}

int	ft_pf_putusint(va_list ap, t_pf_infos *inf)
{
	int					res;
	int					mag;
	unsigned short int	nb;
	unsigned short int	bkp;

	mag = 1;
	nb = (unsigned short int)va_arg(ap, int);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag);
	ft_pf_putullint_aux((unsigned long long)nb);
	return (res);
}

int	ft_pf_putucint(va_list ap, t_pf_infos *inf)
{
	int				res;
	int				mag;
	unsigned char	nb;
	unsigned char	bkp;

	mag = 1;
	nb = (unsigned char)va_arg(ap, int);
	bkp = nb;
	while (bkp /= 10)
		mag++;
	res = mag;
	res += ft_pf_format_output(inf, mag);
	ft_pf_putullint_aux((unsigned long long)nb);
	return (res);
}
