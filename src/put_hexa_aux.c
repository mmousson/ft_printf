/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hexa_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:43:49 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:51:57 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_put_hexa_aux(unsigned long long int nb, t_pf_infos *inf)
{
	if (nb >= 16)
		ft_pf_put_hexa_aux(nb / 16, inf);
	if (inf->is_x == 1)
		ft_putchar((nb % 16) + ((nb % 16 >= 10) ? 'a' - 10 : '0'));
	else
		ft_putchar((nb % 16) + ((nb % 16 >= 10) ? 'A' - 10 : '0'));
}
