/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 08:17:20 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:52:13 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex(size_t nb)
{
	if (nb >= 16)
		ft_put_hex(nb / 16);
	ft_putchar((nb % 16) + ((nb % 16 >= 10) ? 'a' - 10 : '0'));
}

int			ft_put_pointer(va_list ap, t_pf_infos *inf)
{
	int		mag;
	size_t 	ptr_value;

	mag = 1;
	UNUSED(inf);
	ft_putstr("0x");
	ptr_value = (size_t)va_arg(ap, void *);
	ft_put_hex(ptr_value);
	while (ptr_value /= 16)
		mag++;
	return (mag + 2);
}
