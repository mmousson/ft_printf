/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:27:15 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:51:47 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putchar(va_list ap, t_pf_infos *inf)
{
	unsigned char c;

	UNUSED(inf);
	c = (unsigned char)va_arg(ap, int);
	return ((int)write(1, &c, 1));
}
