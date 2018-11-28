/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:16:23 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/28 21:28:51 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static inline int	ft_has_percent(const char *fmt)
{
	while (*fmt != '\0')
	{
		if (*fmt == '%')
			return (1);
		fmt++;
	}
	return (0);
}

static inline int	ft_check(const char *fmt)
{
	int			check;

	if (ft_has_percent(fmt))
		return (1);
	check = 0;
	while (*fmt != '\0')
		if (ft_pf_c_in_str(*fmt, "_cspdiouxXf"))
			return (1);
		else if (ft_pf_c_in_str(*fmt, "_ .+-#%lLh0123456789"))
			fmt++;
		else
			return (0);
	return (0);
}

static int			ft_pf_putstr_aux(char *str, const char **format)
{
	int ret;

	ret = ft_strlen(str);
	write(1, str, ret);
	free(str);
	(*format) += ret;
	return (ret);
}

int					ft_printf(const char *format, ...)
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
			if (ft_check(format + 1))
			{
				ret += ((*(format + 1) == '%') && (format += 2)
					? (int)write(1, "%", 1) : ft_pf_dispatcher(&format, list));
			}
			else
				while (*format != '\0'
							&& ft_pf_c_in_str(*format, "_ .+-#%lLh0123456789"))
					format++;
		}
		f = ft_strchr(format, '%');
		ret += ft_pf_putstr_aux(ft_strsub(format, 0, f ? f - format
					: (int)ft_strlen(format)), &format);
	}
	va_end(list);
	return (ret);
}
