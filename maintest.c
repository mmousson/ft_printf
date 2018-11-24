/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:02:11 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/24 10:16:00 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("ret = %d\n", ft_printf("%d %d %i%li %d", 45, 28, 96, LONG_MAX, 208345678));
	printf("ret = %d\n", printf("%d %d %i%li %d", 45, 28, 96, LONG_MAX, 208345678));
	// ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MAX));
	// printf("ret = %d\n", printf("%lld", LLONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MIN));
	// printf("ret = %d\n", printf("%lld", LLONG_MIN));
	// ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MAX + 42));
	// printf("ret = %d\n", printf("%lld", LLONG_MAX + 42));
	// ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MIN - 42));
	// printf("ret = %d\n", printf("%lld", LLONG_MIN - 42));
	// ft_printf("ret = %d\n", ft_printf("%-+#12.3f\n", 42.0f));
	// printf("ret = %d\n", printf("%-+#12.3f\n", 42.0f));
	return (0);
}