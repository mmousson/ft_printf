/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 07:03:47 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/29 09:30:01 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_w_buf(char **old, char *content, size_t len)
{
	int 	old_len;
	char	*new;

	old_len = ft_strlen(*old);
	new = (char *)malloc(old_len + len + 1);
	ft_strcpy(new, *old);
	ft_strncpy(new + old_len, content, len);
	new[old_len + len] = '\0';
	free(*old);
	*old = new;
	return (len);
}

int		ft_pf_pad(const char **str, t_pf_infos *inf)
{
	int			i;
	const char	*s;
	char		pad;

	i = -1;
	s = *str;
	ft_pf_initiate_attributes(inf);
	inf->bkp = ft_abs(ft_atoi(s + 1)) - 1;
	while (*++s != '\0' && ft_pf_c_in_str(*s, "_ .+-#%lLh0123456789"))
		ft_pf_get_attributes(inf, s);
	inf->conversion = *s++;
	pad = (inf->zero_pad == 1) ? '0' : ' ';
	if (inf->justify == 1)
		write(1, &(inf->conversion), 1);
	while (++i < inf->bkp)
		write(1, &pad, 1);
	if (inf->justify == -1)
		write(1, &(inf->conversion), 1);
	*str = s;
	free(inf);
	return (ft_max(0, inf->bkp) + 1);
}

int		ft_reflect(char c, t_pf_infos *inf)
{
	return (ft_w_buf(inf->buf, &c, 1));
}