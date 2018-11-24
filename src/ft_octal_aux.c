/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal_aux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:04:41 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/22 09:53:07 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pf_putoctal_ulli_aux(unsigned long long int nb)
{
	if (nb >= 8)
		ft_pf_putoctal_ulli_aux(nb / 8);
	ft_putchar('0' + nb % 8);
}
