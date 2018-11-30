/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 14:16:23 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/30 20:51:19 by mmousson         ###   ########.fr       */
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

static void			ft_pf_putstr_aux(char *str, const char **format,
						t_pf_infos *inf)
{
	int offset;

	offset = ft_strlen(str);
	ft_w_buf(inf->buf, str, offset);
	free(str);
	(*format) += offset;
}

int					ft_printf_aux(const char *format, va_list list,
						t_pf_infos *inf)
{
	char	*f;

	while (*format)
	{
		if (*format == '%')
		{
			if (ft_check(format + 1))
				(*(format + 1) == '%') && (format += 2)
					? ft_w_buf(inf->buf, "%", 1)
					: ft_pf_dispatcher(&format, list, inf);
			else if (*(format + 1) == '\0')
				format++;
			else
				ft_pf_pad(&format, inf);
		}
		f = ft_strchr(format, '%');
		ft_pf_putstr_aux(ft_strsub(format, 0, f ? f - format
					: (int)ft_strlen(format)), &format, inf);
	}
	write(1, *(inf->buf), ft_strlen(*inf->buf));
	return (ft_strlen(*(inf->buf)));
}

int					ft_printf(const char *format, ...)
{
	int			ret;
	va_list		list;
	t_pf_infos	*inf;

	va_start(list, format);
	if ((inf = (t_pf_infos *)ft_memalloc(sizeof(t_pf_infos))) == NULL)
		return (0);
	if ((inf->buf = (char **)ft_memalloc(sizeof(char *))) == NULL)
	{
		free(inf);
		return (0);
	}
	*(inf->buf) = ft_strnew(0);
	ret = ft_printf_aux(format, list, inf);
	free(*(inf->buf));
	free(inf->buf);
	free(inf);
	va_end(list);
	return (ret);
}
