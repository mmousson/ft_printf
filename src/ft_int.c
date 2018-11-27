/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 06:49:35 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/27 04:57:28 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		ft_pf_putint(va_list ap, t_pf_infos *inf)
{
	int	res;
	int	nb;

	nb = va_arg(ap, int);
	res = ft_pf_putllint_aux((long long int)nb, inf);
	return (res);
}

int		ft_pf_putlint(va_list ap, t_pf_infos *inf)
{
	int			res;
	long int	nb;

	nb = va_arg(ap, long int);
	res = ft_pf_putllint_aux((long long int)nb, inf);
	return (res);
}

int		ft_pf_putllint(va_list ap, t_pf_infos *inf)
{
	int				res;
	long long int	nb;

	nb = va_arg(ap, long long int);
	res = ft_pf_putllint_aux(nb, inf);
	return (res);
}

int		ft_pf_putsint(va_list ap, t_pf_infos *inf)
{
	int			res;
	short int	nb;

	nb = (short int)(va_arg(ap, int));
	res = ft_pf_putllint_aux((long long int)nb, inf);
	return (res);
}

int		ft_pf_putcint(va_list ap, t_pf_infos *inf)
{
	int		res;
	char	nb;

	nb = (char)va_arg(ap, int);
	res = ft_pf_putllint_aux((long long int)nb, inf);
	return (res);
}
