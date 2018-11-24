/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:39:25 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:51:24 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putstr(va_list ap, t_pf_infos *inf)
{
	int 	size;
	const char	*str;

	UNUSED(inf);
	str = va_arg(ap, const char *);
	size = ft_strlen(str);
	ft_putstr(str);
	return (size);
}
