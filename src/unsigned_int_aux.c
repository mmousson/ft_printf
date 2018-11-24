/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_int_aux.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:18:23 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:50:41 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pf_putullint_aux(unsigned long long int nb)
{
	if (nb >= 10)
		ft_pf_putullint_aux(nb / 10);
	ft_putchar('0' + nb % 10);
}
