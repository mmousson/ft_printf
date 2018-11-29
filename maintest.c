// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:02:11 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/29 05:00:36 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	char c = '7';
	ft_printf("ret = %d\n", ft_printf("Wololo!"));
	ft_printf("ret = %d\n", ft_printf("% %"));
	ft_printf("ret = %d\n", ft_printf("%-5%"));
	ft_printf("ret = %d\n", ft_printf("%5%"));
	ft_printf("ret = %d\n", ft_printf("%5%"));
	ft_printf("ret = %d\n", ft_printf("%d", 42));

	// ft_printf("ret = %d\n", ft_printf("111%s333%s555%saaa%sccc", "222", "444", "666", "bbb"));
	// printf("ret = %d\n", printf("111%s333%s555%saaa%sccc", "222", "444", "666", "bbb"));
	// ft_printf("ret = %d\n", ft_printf("{%10Z}"));
	// printf("ret = %d\n", printf("{%10Z}"));
	// ft_printf("ret = %d\n", ft_printf("% %"));
	// printf("ret = %d\n", printf("% %"));
	// ft_printf("ret = %d\n", ft_printf("%p%%%i%o%u%x%X%c", &c, LONG_MAX, 42, 42, 100000, 42, 'c'));
	// printf("ret = %d\n", printf("%p%%%i%o%u%x%X%c", &c, LONG_MAX, 42, 42, 100000, 42, 'c'));
	// ft_printf("ret = %d\n", ft_printf("{% 03d}", 0));
	// printf("ret = %d\n", printf("{% 03d}", 0));
	// ft_printf("ret = %d\n", ft_printf("% "));
	// printf("ret = %d\n", printf("% "));
	// ft_printf("ret = %d\n", ft_printf("%"));
	// printf("ret = %d\n", printf("%"));
	// ft_printf("ret = %d\n", ft_printf("%-5%"));
	// printf("ret = %d\n", printf("%-5%"));
	// ft_printf("ret = %d\n", ft_printf("%5%"));
	// printf("ret = %d\n", printf("%5%"));
	// ft_printf("ret = %d\n", ft_printf("%010+d", 42));
	// printf("ret = %d\n", printf("%010+d", 42));
	// ft_printf("ret = %d\n", ft_printf("%+%", 42));
	// printf("ret = %d\n", printf("%+%", 42));
	// ft_printf("ret = %d\n", ft_printf("{% -15Z}", 123));
	// printf("ret = %d\n", printf("{% -15Z}", 123));
	// ft_printf("ret = %d\n", ft_printf("% +Zoo"));
	// printf("ret = %d\n", printf("% +Zoo"));
	// ft_printf("ret = %d\n", ft_printf("% Zoo"));
	// printf("ret = %d\n", printf("% Zoo"));
	// ft_printf("ret = %d\n", ft_printf("%.3%"));
	// printf("ret = %d\n", printf("%.3%"));
	// ft_printf("ret = %d\n", ft_printf("%05.%"));
	// printf("ret = %d\n", printf("%05.%"));
	// ft_printf("ret = %d\n", ft_printf("%05.Z"));
	// printf("ret = %d\n", printf("%05.Z"));


	// ft_printf("ret = %d\n", ft_printf("@moulitest: %5.d %5.0d", 0, 0));
	// printf("ret = %d\n", printf("@moulitest: %5.d %5.0d", 0, 0));
	// ft_printf("ret = %d\n", ft_printf("%+u", 4294967295));
	// printf("ret = %d\n", printf("%+u", 4294967295));

	// ft_printf("ret = %d\n", ft_printf("%25.10s", "Wololo! Hello :)"));
	// printf("ret = %d\n", printf("%25.10s", "Wololo! Hello :)"));
	// ft_printf("ret = %d\n", ft_printf("%25.30s", "Wololo! Hello :)"));
	// printf("ret = %d\n", printf("%25.30s", "Wololo! Hello :)"));
	// ft_printf("ret = %d\n", ft_printf("%--5s", "ab"));
	// printf("ret = %d\n", printf("%--5s", "ab"));
	// ft_printf("ret = %d\n", ft_printf("%5s", "ab"));
	// printf("ret = %d\n", printf("%5s", "ab"));
	// ft_printf("ret = %d\n", ft_printf("%5s", ""));
	// printf("ret = %d\n", printf("%5s", ""));
	// ft_printf("ret = %d\n", ft_printf("%.5s", "hi\0dden"));
	// printf("ret = %d\n", printf("%.5s", "hi\0dden"));
	// ft_printf("ret = %d\n", ft_printf("%.s", "hidden"));
	// printf("ret = %d\n", printf("%.s", "hidden"));
	// ft_printf("ret = %d\n", ft_printf("%s HELLO %s", ">>", "<<"));
	// printf("ret = %d\n", printf("%s HELLO %s", ">>", "<<"));
	// ft_printf("ret = %d\n", ft_printf("%s", "The string %s!"));
	// printf("ret = %d\n", printf("%s", "The string %s!"));
	// ft_printf("ret = %d\n", ft_printf("%s", ""));
	// printf("ret = %d\n", printf("%s", ""));
	// ft_printf("ret = %d\n", ft_printf("%2.s", 0));
	// printf("ret = %d\n", printf("%2.s", 0));
	// ft_printf("ret = %d\n", ft_printf("%12.s", 0));
	// printf("ret = %d\n", printf("%12.s", 0));
	// ft_printf("ret = %d\n", ft_printf("%2.2s", 0));
	// printf("ret = %d\n", printf("%2.2s", 0));
	// ft_printf("ret = %d\n", ft_printf("%2.12s", 0));
	// printf("ret = %d\n", printf("%2.12s", 0));
	// ft_printf("ret = %d\n", ft_printf("%05.s", 0));
	// printf("ret = %d\n", printf("%05.s", 0));
	// ft_printf("ret = %d\n", ft_printf("{%.s}", 0));
	// printf("ret = %d\n", printf("{%.s}", 0));

	// ft_printf("ret = %d\n", ft_printf("%05c", '4'));
	// printf("ret = %d\n", printf("%05c", '4'));
	// ft_printf("ret = %d\n", ft_printf("%c  %c %5c %5c %12c", 0, 0, 'X', 'L', '9'));
	// printf("ret = %d\n", printf("%c  %c %5c %5c %12c", 0, 0, 'X', 'L', '9'));
	// ft_printf("ret = %d\n", ft_printf("%--5c", '4'));
	// printf("ret = %d\n", printf("%--5c", '4'));
	// ft_printf("ret = %d\n", ft_printf("%5c", 'b'));
	// printf("ret = %d\n", printf("%5c", 'b'));
	// ft_printf("ret = %d\n", ft_printf("%5c", 0));
	// printf("ret = %d\n", printf("%5c", 0));
	// ft_printf("ret = %d\n", ft_printf("%c", -1));
	// printf("ret = %d\n", printf("%c", -1));
	// ft_printf("ret = %d\n", ft_printf("%c", 'a'));
	// printf("ret = %d\n", printf("%c", 'a'));
	// ft_printf("ret = %d\n", ft_printf("%c", 0));
	// printf("ret = %d\n", printf("%c", 0));

	// ft_printf("ret = %d\n", ft_printf("%p %5p %.2p %.15p %.15p", 5, 4896548, 15694, 0, -1));
	// printf("ret = %d\n", printf("%p %5p %.2p %.15p %.15p", 5, 4896548, 15694, 0, -1));
	// ft_printf("ret = %d\n", ft_printf("%48p", 587));
	// printf("ret = %d\n", printf("%48p", 587));
	// ft_printf("ret = %d\n", ft_printf("%4p", 0));
	// printf("ret = %d\n", printf("%4p", 0));
	// ft_printf("ret = %d\n", ft_printf("%-8p", 42));
	// printf("ret = %d\n", printf("%-8p", 42));
	// ft_printf("ret = %d\n", ft_printf("%--.5p", 42));
	// printf("ret = %d\n", printf("%--.5p", 42));
	// ft_printf("ret = %d\n", ft_printf("%9.0p", 482));
	// printf("ret = %d\n", printf("%9.0p", 482));
	// ft_printf("ret = %d\n", ft_printf("%.5p", 32));
	// printf("ret = %d\n", printf("%.5p", 32));
	// ft_printf("ret = %d\n", ft_printf("%.5p", 0));
	// printf("ret = %d\n", printf("%.5p", 0));
	// ft_printf("ret = %d\n", ft_printf("%p", 58));
	// printf("ret = %d\n", printf("%p", 58));
	// ft_printf("ret = %d\n", ft_printf("%p", -1));
	// printf("ret = %d\n", printf("%p", -1));
	// ft_printf("ret = %d\n", ft_printf("%p", LONG_MAX + 5));
	// printf("ret = %d\n", printf("%p", LONG_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%p", LONG_MAX));
	// printf("ret = %d\n", printf("%p", LONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%p", -42));
	// printf("ret = %d\n", printf("%p", -42));
	// ft_printf("ret = %d\n", ft_printf("%p", 0));
	// printf("ret = %d\n", printf("%p", 0));
	// ft_printf("ret = %d\n", ft_printf("{%05p}", 0));
	// printf("ret = %d\n", printf("{%05p}", 0));
	// ft_printf("ret = %d\n", ft_printf("%.0p %.p", 0, 0));
	// printf("ret = %d\n", printf("%.0p %.p", 0, 0));

	// ft_printf("ret = %d\n", ft_printf("%5u%5u %.0u %.5u %05u", 4, 50, 0, LONG_MAX, 0));
	// printf("ret = %d\n", printf("%5u%5u %.0u %.5u %05u", 4, 50, 0, LONG_MAX, 0));
	// ft_printf("ret = %d\n", ft_printf("%040u", 0));
	// printf("ret = %d\n", printf("%040u", 0));
	// ft_printf("ret = %d\n", ft_printf("%-8u", 482));
	// printf("ret = %d\n", printf("%-8u", 482));
	// ft_printf("ret = %d\n", ft_printf("%--.5u", 42));
	// printf("ret = %d\n", printf("%--.5u", 42));
	// ft_printf("ret = %d\n", ft_printf("%09.0u", 482));
	// printf("ret = %d\n", printf("%09.0u", 482));
	// ft_printf("ret = %d\n", ft_printf("%.5u", 32));
	// printf("ret = %d\n", printf("%.5u", 32));
	// ft_printf("ret = %d\n", ft_printf("%.5u", 0));
	// printf("ret = %d\n", printf("%.5u", 0));
	// ft_printf("ret = %d\n", ft_printf("%u", 58));
	// printf("ret = %d\n", printf("%u", 58));
	// ft_printf("ret = %d\n", ft_printf("%llu", ULLONG_MAX + 5));
	// printf("ret = %d\n", printf("%llu", ULLONG_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%llu", ULLONG_MAX));
	// printf("ret = %d\n", printf("%llu", ULLONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%llu", -246));
	// printf("ret = %d\n", printf("%llu", -246));
	// ft_printf("ret = %d\n", ft_printf("%llu", 0));
	// printf("ret = %d\n", printf("%llu", 0));
	// ft_printf("ret = %d\n", ft_printf("%lu", ULONG_MAX + 5));
	// printf("ret = %d\n", printf("%lu", ULONG_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%lu", ULONG_MAX));
	// printf("ret = %d\n", printf("%lu", ULONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%lu", -246));
	// printf("ret = %d\n", printf("%lu", -246));
	// ft_printf("ret = %d\n", ft_printf("%lu", 0));
	// printf("ret = %d\n", printf("%lu", 0));
	// ft_printf("ret = %d\n", ft_printf("%hu", USHRT_MAX + 5));
	// printf("ret = %d\n", printf("%hu", USHRT_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%hu", USHRT_MAX));
	// printf("ret = %d\n", printf("%hu", USHRT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%hu", -4));
	// printf("ret = %d\n", printf("%hu", -4));
	// ft_printf("ret = %d\n", ft_printf("%hu", 0));
	// printf("ret = %d\n", printf("%hu", 0));
	// ft_printf("ret = %d\n", ft_printf("%hhu", UCHAR_MAX + 5));
	// printf("ret = %d\n", printf("%hhu", UCHAR_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%hhu", UCHAR_MAX));
	// printf("ret = %d\n", printf("%hhu", UCHAR_MAX));
	// ft_printf("ret = %d\n", ft_printf("%hhu", -1));
	// printf("ret = %d\n", printf("%hhu", -1));
	// ft_printf("ret = %d\n", ft_printf("%hhu", 0));
	// printf("ret = %d\n", printf("%hhu", 0));
	// ft_printf("ret = %d\n", ft_printf("%u", UINT_MAX + 12));
	// printf("ret = %d\n", printf("%u", UINT_MAX + 12));
	// ft_printf("ret = %d\n", ft_printf("%u", UINT_MAX));
	// printf("ret = %d\n", printf("%u", UINT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%u", -42));
	// printf("ret = %d\n", printf("%u", -42));
	// ft_printf("ret = %d\n", ft_printf("%u", 0));
	// printf("ret = %d\n", printf("%u", 0));
	// ft_printf("ret = %d\n", ft_printf("%lu %lu", 0, ULONG_MAX));
	// printf("ret = %d\n", printf("%lu %lu", 0, ULONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%15.4u", 42));
	// printf("ret = %d\n", printf("%15.4u", 42));

	// ft_printf("ret = %d\n", ft_printf("%#08x", 42));
	// printf("ret = %d\n", printf("%#08x", 42));
	// ft_printf("ret = %d\n", ft_printf("@moulitest: %#.x %#.0x", 0, 0));
	// printf("ret = %d\n", printf("@moulitest: %#.x %#.0x", 0, 0));
	// ft_printf("ret = %d\n", ft_printf("%5.2x", 5427));
	// printf("ret = %d\n", printf("%5.2x", 5427));
	// ft_printf("ret = %d\n", ft_printf("%###x", 587));
	// printf("ret = %d\n", printf("%###x", 587));
	// ft_printf("ret = %d\n", ft_printf("%#04x", 0));
	// printf("ret = %d\n", printf("%#04x", 0));
	// ft_printf("ret = %d\n", ft_printf("%-8X", 42));
	// printf("ret = %d\n", printf("%-8X", 42));
	// ft_printf("ret = %d\n", ft_printf("%--.5x", 42));
	// printf("ret = %d\n", printf("%--.5x", 42));
	// ft_printf("ret = %d\n", ft_printf("%#09.0X", 482));
	// printf("ret = %d\n", printf("%#09.0X", 482));
	// ft_printf("ret = %d\n", ft_printf("%#.5x", 0));
	// printf("ret = %d\n", printf("%#.5x", 0));
	// ft_printf("ret = %d\n", ft_printf("%llx", ULLONG_MAX + 5));
	// printf("ret = %d\n", printf("%llx", ULLONG_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%llx", ULLONG_MAX));
	// printf("ret = %d\n", printf("%llx", ULLONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%llx", -246));
	// printf("ret = %d\n", printf("%llx", -246));
	// ft_printf("ret = %d\n", ft_printf("%llx", 0));
	// printf("ret = %d\n", printf("%llx", 0));
	// ft_printf("ret = %d\n", ft_printf("%lx", ULONG_MAX + 5));
	// printf("ret = %d\n", printf("%lx", ULONG_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%lx", ULONG_MAX));
	// printf("ret = %d\n", printf("%lx", ULONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%lx", -246));
	// printf("ret = %d\n", printf("%lx", -246));
	// ft_printf("ret = %d\n", ft_printf("%lx", 0));
	// printf("ret = %d\n", printf("%lx", 0));
	// ft_printf("ret = %d\n", ft_printf("%hx", USHRT_MAX));
	// printf("ret = %d\n", printf("%hx", USHRT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%hx", -4));
	// printf("ret = %d\n", printf("%hx", -4));
	// ft_printf("ret = %d\n", ft_printf("%hx", 0));
	// printf("ret = %d\n", printf("%hx", 0));
	// ft_printf("ret = %d\n", ft_printf("%hhx", UCHAR_MAX + 5));
	// printf("ret = %d\n", printf("%hhx", UCHAR_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%hhx", UCHAR_MAX));
	// printf("ret = %d\n", printf("%hhx", UCHAR_MAX));
	// ft_printf("ret = %d\n", ft_printf("%hhx", -1));
	// printf("ret = %d\n", printf("%hhx", -1));
	// ft_printf("ret = %d\n", ft_printf("%hhx", 0));
	// printf("ret = %d\n", printf("%hhx", 0));
	// ft_printf("ret = %d\n", ft_printf("%x", UINT_MAX + 12));
	// printf("ret = %d\n", printf("%x", UINT_MAX + 12));
	// ft_printf("ret = %d\n", ft_printf("%x", UINT_MAX));
	// printf("ret = %d\n", printf("%x", UINT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%x", -42));
	// printf("ret = %d\n", printf("%x", -42));
	// ft_printf("ret = %d\n", ft_printf("%x", 0));
	// printf("ret = %d\n", printf("%x", 0));
	// ft_printf("ret = %d\n", ft_printf("%15.4x", 424242));
	// printf("ret = %d\n", printf("%15.4x", 424242));
	// ft_printf("ret = %d\n", ft_printf("%15.4x", 42));
	// printf("ret = %d\n", printf("%15.4x", 42));
	// ft_printf("ret = %d\n", ft_printf("%#0.5x", 1));
	// printf("ret = %d\n", printf("%#0.5x", 1));
	// ft_printf("ret = %d\n", ft_printf("%#08x", 42));
	// printf("ret = %d\n", printf("%#08x", 42));
	// ft_printf("ret = %d\n", ft_printf("%#8x", 42));
	// printf("ret = %d\n", printf("%#8x", 42));
	// ft_printf("ret = %d\n", ft_printf("%#-08x", 42));
	// printf("ret = %d\n", printf("%#-08x", 42));

	// ft_printf("ret = %d\n", ft_printf("@moulitest: %#.o %#.0o", 0, 0));
	// printf("ret = %d\n", printf("@moulitest: %#.o %#.0o", 0, 0));
	// ft_printf("ret = %d\n", ft_printf("%o %o %lo", 45, 28, 96));
	// printf("ret = %d\n", printf("%o %o %lo", 45, 28, 96));
	// ft_printf("ret = %d\n", ft_printf("%#0#4lo", (unsigned long)0));
	// printf("ret = %d\n", printf("%#0#4lo", (unsigned long)0));
	// ft_printf("ret = %d\n", ft_printf("%.5o", 4826));
	// printf("ret = %d\n", printf("%.5o", 4826));
	// ft_printf("ret = %d\n", ft_printf("%#04096o", 1337));
	// printf("ret = %d\n", printf("%#04096o", 1337));
	// ft_printf("ret = %d\n", ft_printf("%#9.0o", 482));
	// printf("ret = %d\n", printf("%#9.0o", 482));
	// ft_printf("ret = %d\n", ft_printf("%#0.o", 1));
	// printf("ret = %d\n", printf("%#0.o", 1));
	// ft_printf("ret = %d\n", ft_printf("%#0.3o", 1));
	// printf("ret = %d\n", printf("%#0.3o", 1));
	// ft_printf("ret = %d\n", ft_printf("% .3o", 1));
	// printf("ret = %d\n", printf("% .3o", 1));
	// ft_printf("ret = %d\n", ft_printf("%#.3o", 1));
	// printf("ret = %d\n", printf("%#.3o", 1));
	// ft_printf("ret = %d\n", ft_printf("%.3o", 0));
	// printf("ret = %d\n", printf("%.3o", 0));
	// ft_printf("ret = %d\n", ft_printf("%.3o", 1));
	// printf("ret = %d\n", printf("%.3o", 1));
	// ft_printf("ret = %d\n", ft_printf("%llo", ULLONG_MAX + 5));
	// printf("ret = %d\n", printf("%llo", ULLONG_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%llo", ULLONG_MAX));
	// printf("ret = %d\n", printf("%llo", ULLONG_MAX));
	// ft_printf("ret = %d\n", ft_printf("%llo", -246));
	// printf("ret = %d\n", printf("%llo", -246));
	// ft_printf("ret = %d\n", ft_printf("%llo", 0));
	// printf("ret = %d\n", printf("%llo", 0));
	// ft_printf("ret = %d\n", ft_printf("%lo", USHRT_MAX + 5));
	// printf("ret = %d\n", printf("%lo", USHRT_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%lo", USHRT_MAX));
	// printf("ret = %d\n", printf("%lo", USHRT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%lo", -246));
	// printf("ret = %d\n", printf("%lo", -246));
	// ft_printf("ret = %d\n", ft_printf("%lo", 0));
	// printf("ret = %d\n", printf("%lo", 0));
	// ft_printf("ret = %d\n", ft_printf("%ho", USHRT_MAX + 5));
	// printf("ret = %d\n", printf("%ho", USHRT_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%ho", USHRT_MAX));
	// printf("ret = %d\n", printf("%ho", USHRT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%ho", -4));
	// printf("ret = %d\n", printf("%ho", -4));
	// ft_printf("ret = %d\n", ft_printf("%ho", 0));
	// printf("ret = %d\n", printf("%ho", 0));
	// ft_printf("ret = %d\n", ft_printf("%hho", UCHAR_MAX + 5));
	// printf("ret = %d\n", printf("%hho", UCHAR_MAX + 5));
	// ft_printf("ret = %d\n", ft_printf("%hho", UCHAR_MAX));
	// printf("ret = %d\n", printf("%hho", UCHAR_MAX));
	// ft_printf("ret = %d\n", ft_printf("%hho", 0));
	// printf("ret = %d\n", printf("%hho", 0));
	// ft_printf("ret = %d\n", ft_printf("%o", UINT_MAX));
	// printf("ret = %d\n", printf("%o", UINT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%o", UINT_MAX + 12));
	// printf("ret = %d\n", printf("%o", UINT_MAX + 12));
	// ft_printf("ret = %d\n", ft_printf("%o", -42));
	// printf("ret = %d\n", printf("%o", -42));
	// ft_printf("ret = %d\n", ft_printf("%o", 42));
	// printf("ret = %d\n", printf("%o", 42));
	// ft_printf("ret = %d\n", ft_printf("%o", 0));
	// printf("ret = %d\n", printf("%o", 0));
	// ft_printf("ret = %d\n", ft_printf("%15.4o", 424242));
	// printf("ret = %d\n", printf("%15.4o", 424242));
	// ft_printf("ret = %d\n", ft_printf("%15.4o", 42));
	// printf("ret = %d\n", printf("%15.4o", 42));
	// ft_printf("ret = %d\n", ft_printf("%-5o", 2500));
	// printf("ret = %d\n", printf("%-5o", 2500));
	// ft_printf("ret = %d\n", ft_printf("%-10.5o", 2500));
	// printf("ret = %d\n", printf("%-10.5o", 2500));
	// ft_printf("ret = %d\n", ft_printf("%-5.10o", 2500));
	// printf("ret = %d\n", printf("%-5.10o", 2500));
	// ft_printf("ret = %d\n", ft_printf("%-10.2o", 2500));
	// printf("ret = %d\n", printf("%-10.2o", 2500));
	// ft_printf("ret = %d\n", ft_printf("%-15.3ho", USHRT_MAX));
	// printf("ret = %d\n", printf("%-15.3ho", USHRT_MAX));
	// ft_printf("ret = %d\n", ft_printf("%-10.2o", 2500));
	// printf("ret = %d\n", printf("%-10.2o", 2500));
	

	// ft_printf("ret = %d\n", ft_printf("%15.4d", -424242));
	// printf("ret = %d\n", printf("%15.4d", -424242));
	// ft_printf("ret = %d\n", ft_printf("%15.4d", 424242));
	// printf("ret = %d\n", printf("%15.4d", 424242));
	// ft_printf("ret = %d\n", ft_printf("%0d", -42));
	// printf("ret = %d\n", printf("%0d", -42));
	// ft_printf("ret = %d\n", ft_printf("%00d", -42));
	// printf("ret = %d\n", printf("%00d", -42));
	// ft_printf("ret = %d\n", ft_printf("% 10.5d", 4242));
	// printf("ret = %d\n", printf("% 10.5d", 4242));
	// ft_printf("ret = %d\n", ft_printf("%10.5d", -242));
	// printf("ret = %d\n", printf("%10.5d", -242));
	// ft_printf("ret = %d\n", ft_printf("%035.2d", -123456));
	// printf("ret = %d\n", printf("%035.2d", -123456));
	// ft_printf("ret = %d\n", ft_printf("%03.2d", -12));
	// printf("ret = %d\n", printf("%03.2d", -12));
	// ft_printf("ret = %d\n", ft_printf("%+-10.5d", 4242));
	// printf("ret = %d\n", printf("%+-10.5d", 4242));
	// ft_printf("ret = %d\n", ft_printf("%-035.22d", -12));
	// printf("ret = %d\n", printf("%-035.22d", -12));
	// ft_printf("ret = %d\n", ft_printf("%+-042d", -481));
	// printf("ret = %d\n", printf("%+-042d", -481));
	// ft_printf("ret = %d\n", ft_printf("%-042d", -481));
	// printf("ret = %d\n", printf("%-042d", -481));
	// ft_printf("ret = %d\n", ft_printf("%+042d", 481));
	// printf("ret = %d\n", printf("%+042d", 481));
	// ft_printf("ret = %d\n", ft_printf("%+42d", -481));
	// printf("ret = %d\n", printf("%+42d", -481));
	// ft_printf("ret = %d\n", ft_printf("%+042d", -481));
	// printf("ret = %d\n", printf("%+042d", -481));
	// ft_printf("ret = %d\n", ft_printf("%0.47d", -481));
	// printf("ret = %d\n", printf("%0.47d", -481));
	// ft_printf("ret = %d\n", ft_printf("%047.d", 1));
	// printf("ret = %d\n", printf("%047.d", 1));
	// ft_printf("ret = %d\n", ft_printf("%++ ++ d", 55));
	// printf("ret = %d\n", printf("%++ ++ d", 55));
	// ft_printf("ret = %d\n", ft_printf("%.5d", -42));
	// printf("ret = %d\n", printf("%.5d", -42));
	// ft_printf("ret = %d\n", ft_printf("%+05d", 55));
	// printf("ret = %d\n", printf("%+05d", 55));
	// ft_printf("ret = %d\n", ft_printf("% 04d", 40));
	// printf("ret = %d\n", printf("% 04d", 40));
	// ft_printf("ret = %d\n", ft_printf("%+ 04d", 40));
	// printf("ret = %d\n", printf("%+ 04d", 40));
	// ft_printf("ret = %d\n", ft_printf("%+ 4d", 40));
	// printf("ret = %d\n", printf("%+ 4d", 40));
	// ft_printf("ret = %d\n", ft_printf("%+4d", 40));
	// printf("ret = %d\n", printf("%+4d", 40));
	// ft_printf("ret = %d\n", ft_printf("%+.5d", 55));
	// printf("ret = %d\n", printf("%+.5d", 55));
	// ft_printf("ret = %d\n", ft_printf("%+.0d", 0));
	// printf("ret = %d\n", printf("%+.0d", 0));
	// ft_printf("ret = %d\n", ft_printf("%4d", 1234567));
	// printf("ret = %d\n", printf("%4d", 1234567));
	// ft_printf("ret = %d\n", ft_printf("%4d", 12));
	// printf("ret = %d\n", printf("%4d", 12));
	// ft_printf("ret = %d\n", ft_printf("%4.0d", 0));
	// printf("ret = %d\n", printf("%4.0d", 0));
	// ft_printf("ret = %d\n", ft_printf("%035.22d", -1));
	// printf("ret = %d\n", printf("%035.22d", -1));
	// ft_printf("ret = %d\n", ft_printf("%03.22d", -1));
	// printf("ret = %d\n", printf("%03.22d", -1));
	// ft_printf("ret = %d\n", ft_printf("%04.2d", -1));
	// printf("ret = %d\n", printf("%04.2d", -1));
	// ft_printf("ret = %d\n", ft_printf("%d", 0));
	// printf("ret = %d\n", printf("%d", 0));
	// ft_printf("ret = %d\n", ft_printf("%d %d %i%li %d", 45, 28, 96, LONG_MAX, 208345678));
	// printf("ret = %d\n", printf("%d %d %i%li %d", 45, 28, 96, LONG_MAX, 208345678));
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