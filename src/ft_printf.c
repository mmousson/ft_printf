/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:16:23 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/24 15:36:13 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	ft_pf_putstr_aux(char *str, const char **format)
{
	int ret;

	ret = ft_strlen(str);
	write(1, str, ret);
	free(str);
	(*format) += ret;
	return (ret);
}

int			ft_printf(const char *format, ...)
{
	char	*f;
	int		ret;
	va_list	list;

	ret = 0;
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
			{
				ret += write(1, "%", 1);
				format += 2;
			}
			else
				ret += ft_pf_dispatcher(&format, list);
		}
		f = ft_strchr(format, '%');
		ret += ft_pf_putstr_aux(ft_strsub(format, 0, f ? f - format
					: (int)ft_strlen(format)), &format);
	}
	va_end(list);
	return (ret);
}

// int			main(void)
// {
// 	int res;

// 	res = ft_printf("%c || %#.12d || %f || %hhi || %.12lo || %p || %s || %+hu || %+#hhX || %lx\n",
// 			(char)42,
// 			123456,
// 			0.0f,
// 			(char)21,
// 			1024UL,
// 			&ft_printf,
// 			"Wololo",
// 			(unsigned short)90,
// 			(unsigned char)42,
// 			424242424242LU);
// 	ft_printf("Characters written = %d\n", res);
// 	return (0);
// }
