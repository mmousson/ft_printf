/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:46:31 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/29 05:02:21 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putuint(va_list ap, t_pf_infos *inf)
{
	int				res;
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	res = ft_pf_putullint_aux((unsigned long long int)nb, inf);
	return (res);
}

int	ft_pf_putulint(va_list ap, t_pf_infos *inf)
{
	int					res;
	unsigned long int	nb;

	nb = va_arg(ap, unsigned long int);
	res = ft_pf_putullint_aux((unsigned long long int)nb, inf);
	return (res);
}

int	ft_pf_putullint(va_list ap, t_pf_infos *inf)
{
	int						res;
	unsigned long long int	nb;

	nb = va_arg(ap, unsigned long long int);
	res = ft_pf_putullint_aux(nb, inf);
	return (res);
}

int	ft_pf_putusint(va_list ap, t_pf_infos *inf)
{
	int					res;
	unsigned short int	nb;

	nb = (unsigned short int)va_arg(ap, int);
	res = ft_pf_putullint_aux((unsigned long long int)nb, inf);
	return (res);
}

int	ft_pf_putucint(va_list ap, t_pf_infos *inf)
{
	int				res;
	unsigned char	nb;

	nb = (unsigned char)va_arg(ap, int);
	res = ft_pf_putullint_aux((unsigned long long int)nb, inf);
	return (res);
}
