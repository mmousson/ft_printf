/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:02:11 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/25 17:42:08 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	ft_printf("ret = %d\n", ft_printf("%###x", 587));
	printf("ret = %d\n", printf("%###x", 587));
	ft_printf("ret = %d\n", ft_printf("%#04x", 0));
	printf("ret = %d\n", printf("%#04x", 0));
	ft_printf("ret = %d\n", ft_printf("%-8X", 42));
	printf("ret = %d\n", printf("%-8X", 42));
	ft_printf("ret = %d\n", ft_printf("%--.5x", 42));
	printf("ret = %d\n", printf("%--.5x", 42));
	ft_printf("ret = %d\n", ft_printf("%#09.0X", 482));
	printf("ret = %d\n", printf("%#09.0X", 482));
	ft_printf("ret = %d\n", ft_printf("%#.5x", 0));
	printf("ret = %d\n", printf("%#.5x", 0));
	ft_printf("ret = %d\n", ft_printf("%llx", ULLONG_MAX + 5));
	printf("ret = %d\n", printf("%llx", ULLONG_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%llx", ULLONG_MAX));
	printf("ret = %d\n", printf("%llx", ULLONG_MAX));
	ft_printf("ret = %d\n", ft_printf("%llx", -246));
	printf("ret = %d\n", printf("%llx", -246));
	ft_printf("ret = %d\n", ft_printf("%llx", 0));
	printf("ret = %d\n", printf("%llx", 0));
	ft_printf("ret = %d\n", ft_printf("%lx", ULONG_MAX + 5));
	printf("ret = %d\n", printf("%lx", ULONG_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%lx", ULONG_MAX));
	printf("ret = %d\n", printf("%lx", ULONG_MAX));
	ft_printf("ret = %d\n", ft_printf("%lx", -246));
	printf("ret = %d\n", printf("%lx", -246));
	ft_printf("ret = %d\n", ft_printf("%lx", 0));
	printf("ret = %d\n", printf("%lx", 0));
	ft_printf("ret = %d\n", ft_printf("%hx", USHRT_MAX));
	printf("ret = %d\n", printf("%hx", USHRT_MAX));
	ft_printf("ret = %d\n", ft_printf("%hx", -4));
	printf("ret = %d\n", printf("%hx", -4));
	ft_printf("ret = %d\n", ft_printf("%hx", 0));
	printf("ret = %d\n", printf("%hx", 0));
	ft_printf("ret = %d\n", ft_printf("%hhx", UCHAR_MAX + 5));
	printf("ret = %d\n", printf("%hhx", UCHAR_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%hhx", UCHAR_MAX));
	printf("ret = %d\n", printf("%hhx", UCHAR_MAX));
	ft_printf("ret = %d\n", ft_printf("%hhx", -1));
	printf("ret = %d\n", printf("%hhx", -1));
	ft_printf("ret = %d\n", ft_printf("%hhx", 0));
	printf("ret = %d\n", printf("%hhx", 0));
	ft_printf("ret = %d\n", ft_printf("%x", UINT_MAX + 12));
	printf("ret = %d\n", printf("%x", UINT_MAX + 12));
	ft_printf("ret = %d\n", ft_printf("%x", UINT_MAX));
	printf("ret = %d\n", printf("%x", UINT_MAX));
	ft_printf("ret = %d\n", ft_printf("%x", -42));
	printf("ret = %d\n", printf("%x", -42));
	ft_printf("ret = %d\n", ft_printf("%x", 0));
	printf("ret = %d\n", printf("%x", 0));


	ft_printf("ret = %d\n", ft_printf("%o %o %lo", 45, 28, 96));
	printf("ret = %d\n", printf("%o %o %lo", 45, 28, 96));
	ft_printf("ret = %d\n", ft_printf("%#0#4lo", 0));
	printf("ret = %d\n", printf("%#0#4lo", 0));
	ft_printf("ret = %d\n", ft_printf("%.5o", 4826));
	printf("ret = %d\n", printf("%.5o", 4826));
	ft_printf("ret = %d\n", ft_printf("%#04096o", 1337));
	printf("ret = %d\n", printf("%#04096o", 1337));
	ft_printf("ret = %d\n", ft_printf("%#9.0o", 482));
	printf("ret = %d\n", printf("%#9.0o", 482));
	ft_printf("ret = %d\n", ft_printf("%#0.3o", 1));
	printf("ret = %d\n", printf("%#0.3o", 1));
	ft_printf("ret = %d\n", ft_printf("%#.3o", 1));
	printf("ret = %d\n", printf("%#.3o", 1));
	ft_printf("ret = %d\n", ft_printf("%.3o", 0));
	printf("ret = %d\n", printf("%.3o", 0));
	ft_printf("ret = %d\n", ft_printf("%.3o", 1));
	printf("ret = %d\n", printf("%.3o", 1));
	ft_printf("ret = %d\n", ft_printf("%llo", ULLONG_MAX + 5));
	printf("ret = %d\n", printf("%llo", ULLONG_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%llo", ULLONG_MAX));
	printf("ret = %d\n", printf("%llo", ULLONG_MAX));
	ft_printf("ret = %d\n", ft_printf("%llo", -246));
	printf("ret = %d\n", printf("%llo", -246));
	ft_printf("ret = %d\n", ft_printf("%llo", 0));
	printf("ret = %d\n", printf("%llo", 0));
	ft_printf("ret = %d\n", ft_printf("%lo", USHRT_MAX + 5));
	printf("ret = %d\n", printf("%lo", USHRT_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%lo", USHRT_MAX));
	printf("ret = %d\n", printf("%lo", USHRT_MAX));
	ft_printf("ret = %d\n", ft_printf("%lo", -246));
	printf("ret = %d\n", printf("%lo", -246));
	ft_printf("ret = %d\n", ft_printf("%lo", 0));
	printf("ret = %d\n", printf("%lo", 0));
	ft_printf("ret = %d\n", ft_printf("%ho", USHRT_MAX + 5));
	printf("ret = %d\n", printf("%ho", USHRT_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%ho", USHRT_MAX));
	printf("ret = %d\n", printf("%ho", USHRT_MAX));
	ft_printf("ret = %d\n", ft_printf("%ho", -4));
	printf("ret = %d\n", printf("%ho", -4));
	ft_printf("ret = %d\n", ft_printf("%ho", 0));
	printf("ret = %d\n", printf("%ho", 0));
	ft_printf("ret = %d\n", ft_printf("%hho", UCHAR_MAX + 5));
	printf("ret = %d\n", printf("%hho", UCHAR_MAX + 5));
	ft_printf("ret = %d\n", ft_printf("%hho", UCHAR_MAX));
	printf("ret = %d\n", printf("%hho", UCHAR_MAX));
	ft_printf("ret = %d\n", ft_printf("%hho", 0));
	printf("ret = %d\n", printf("%hho", 0));
	ft_printf("ret = %d\n", ft_printf("%o", UINT_MAX));
	printf("ret = %d\n", printf("%o", UINT_MAX));
	ft_printf("ret = %d\n", ft_printf("%o", UINT_MAX + 12));
	printf("ret = %d\n", printf("%o", UINT_MAX + 12));
	ft_printf("ret = %d\n", ft_printf("%o", -42));
	printf("ret = %d\n", printf("%o", -42));
	ft_printf("ret = %d\n", ft_printf("%o", 42));
	printf("ret = %d\n", printf("%o", 42));
	ft_printf("ret = %d\n", ft_printf("%o", 0));
	printf("ret = %d\n", printf("%o", 0));


	ft_printf("ret = %d\n", ft_printf("%d", 0));
	printf("ret = %d\n", printf("%d", 0));
	ft_printf("ret = %d\n", ft_printf("%d %d %i%li %d", 45, 28, 96, LONG_MAX, 208345678));
	printf("ret = %d\n", printf("%d %d %i%li %d", 45, 28, 96, LONG_MAX, 208345678));
	ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MAX));
	printf("ret = %d\n", printf("%lld", LLONG_MAX));
	ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MIN));
	printf("ret = %d\n", printf("%lld", LLONG_MIN));
	ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MAX + 42));
	printf("ret = %d\n", printf("%lld", LLONG_MAX + 42));
	ft_printf("ret = %d\n", ft_printf("%lld", LLONG_MIN - 42));
	printf("ret = %d\n", printf("%lld", LLONG_MIN - 42));


	// ft_printf("ret = %d\n", ft_printf("%-+#12.3f\n", 42.0f));
	// printf("ret = %d\n", printf("%-+#12.3f\n", 42.0f));
	return (0);
}