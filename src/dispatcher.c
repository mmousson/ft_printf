/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 20:02:26 by mmousson          #+#    #+#             */
/*   Updated: 2018/11/24 08:52:03 by mmousson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	(*g_func[50])(va_list ap, t_pf_infos *inf) = {
	&ft_pf_putchar,
	&ft_pf_putint,
	&ft_pf_putfloat_f,
	&ft_pf_putint,
	&ft_pf_putoctal_ui,
	&ft_put_pointer,
	&ft_pf_putstr,
	&ft_pf_putuint,
	&ft_pf_put_lhexa,
	&ft_pf_put_lhexa,
	NULL,
	&ft_pf_putlint,
	&ft_pf_putfloat_lf,
	&ft_pf_putlint,
	&ft_pf_putoctal_uli,
	NULL,
	NULL,
	&ft_pf_putulint,
	&ft_pf_put_lhexa_l,
	&ft_pf_put_lhexa_l,
	NULL,
	&ft_pf_putllint,
	&ft_pf_putfloat_llf,
	&ft_pf_putllint,
	&ft_pf_putoctal_ulli,
	NULL,
	NULL,
	&ft_pf_putullint,
	&ft_pf_put_lhexa_ll,
	&ft_pf_put_lhexa_ll,
	NULL,
	&ft_pf_putsint,
	NULL,
	&ft_pf_putsint,
	&ft_pf_putoctal_usi,
	NULL,
	NULL,
	&ft_pf_putusint,
	&ft_pf_put_lhexa_s,
	&ft_pf_put_lhexa_s,
	NULL,
	&ft_pf_putcint,
	NULL,
	&ft_pf_putcint,
	&ft_pf_putoctal_uci,
	NULL,
	NULL,
	&ft_pf_putucint,
	&ft_pf_put_lhexa_c,
	&ft_pf_put_lhexa_c
};

const char *g_conv[] = {
	"PUTCHAR(int) argument converti en unsigned char",//c<==	<=================== OK 0
	"INT(int)",//d<=========================================	<=================== OK 1
	"DOUBLE(double)",//f<===================================	<=================== OK 2
	"INT(int)",//i<=========================================	<=================== OK 3
	"OCTAL(unsigned int)",//o<==============================	<=================== OK 4
	"PUTPOINTER(void *)",//p<===============================	<=================== OK 5
	"PUTSTR(const char *)",//s<=============================	<=================== OK 6
	"UNSIGNED INT(unsigned int)",//u<=======================	<=================== OK 7
	"HEXADECIMAL(unsigned int) with lower",//x<=============	<=================== OK 8
	"HEXADECIMAL(unisgned int) with upper",//X<=============	<=================== OK 9
	"========= INVALID ==========",//lc<====================	<=================== OK 10
	"INT(long)",//ld<=======================================	<=================== OK 11
	"DOUBLE(double)",//lf<==================================	<=================== OK 12
	"INT(long)",//li<=======================================	<=================== OK 13
	"OCTAL(unsigned long)",//lo<============================	<=================== OK 14
	"========= INVALID ==========",//lp<====================	<=================== OK 15
	"========= INVALID ==========",//ls<====================	<=================== OK 16
	"UNSIGNED LONG INT(unsigned long)",//lu<================	<=================== OK 17
	"HEXADECIMAL(unsigned long)",//lx<======================	<=================== OK 18
	"HEXADECIMAL(unsigned long)",//lX<======================	<=================== OK 19
	"========= INVALID ==========",//llc<===================	<=================== OK 20
	"INT(long long)",//lld<=================================	<=================== OK 21
	"LONG DOUBLE(long double)",//Lf - llf<==================	<=================== OK 22
	"INT(long long)",//lli<=================================	<=================== OK 23
	"OCTAL(unsigned long long)",//llo<======================	<=================== OK 24
	"========= INVALID ==========",//llp<===================	<=================== OK 25
	"========= INVALID ==========",//lls<===================	<=================== OK 26
	"UNSIGNED LONG LONG INT(unsigned long long)",//llu<=====	<=================== OK 27
	"HEXADECIMAL(unsigned long long) with lower",//llx<=====	<=================== OK 28
	"HEXADECIMAL(unsigned long long) with upper",//llX<=====	<=================== OK 29
	"========= INVALID ==========",//hc<====================	<=================== OK 30
	"INT(short)",//hd<======================================	<=================== OK 31
	"========= INVALID ==========",//hf<====================	<=================== OK 32
	"INT(short)",//hi<======================================	<=================== OK 33
	"OCTAL(unsigned short)",//ho<===========================	<=================== OK 34
	"========= INVALID ==========",//hp<====================	<=================== OK 35
	"========= INVALID ==========",//hs<====================	<=================== OK 36
	"UNSIGNED SHORT(unsigned short)",//hu<==================	<=================== OK 37
	"HEXADECIMAL(unsigned short) with lower",//hhx<=========	<=================== OK 38
	"HEXADECIMAL(unsigned short) with upper",//hX<==========	<=================== OK 39
	"========= INVALID ==========",//hhc<===================	<=================== OK 40
	"INT(char)",//hhd<======================================	<=================== OK 41
	"========= INVALID ==========",//hhf<===================	<=================== OK 42
	"INT(char)",//hhi<======================================	<=================== OK 43
	"OCTAL(unsigned char)",//hho<===========================	<=================== OK 44
	"========= INVALID ==========",//hhp<===================	<=================== OK 45
	"========= INVALID ==========",//hhs<===================	<=================== OK 46
	"UNSIGNED CHAR(unsigned char)",//hhu<===================	<=================== OK 47
	"HEXADECIMAL(unsigned char) with lower",//hhx<==========	<=================== OK 48
	"HEXADECIMAL(unsigned char) with upper"//hhX<===========	<=================== OK 49
};

int	ft_pf_dispatcher(const char **str, va_list args)
{
	int			ret;
	t_pf_infos	*inf;
	const char	*s;

	ret = 0;
	s = (*str);
	if (!(inf = ft_pf_initiate_attributes()))
		return (-1);
	while (ft_isdigit(*++s) || *s == '#' || *s == '+'
				|| *s == '-' || *s == '.'|| *s == ' ')
		ft_pf_get_attributes(inf, s);
	while (ft_is_conversion_or_flag(*s))
	{
		inf->is_x = (*s == 'x') ? 1 : inf->is_x;
		inf->is_b_x = (*s == 'X') ? 1 : inf->is_b_x;
		ret += ft_flag_offset(*s, ret) + ft_pf_c_in_str(*s, "cdfiopsuxX");//+ ft_conversion_offset(*s);
		s++;
	}
	inf->conversion = *(s - 1);
	ret = ((ret <= 49 && (*g_func[ret])) ? (*g_func[ret])(args, inf) : 0);
	free(inf);
	*str = s;
	return (ret);
}

// int	main(void)
// {
// 	ft_pf_dispatcher("%0#+--+7.31d", NULL);
// 	// ft_pf_dispatcher("%d", NULL);
// 	// ft_pf_dispatcher("%f", NULL);
// 	// ft_pf_dispatcher("%i", NULL);
// 	// ft_pf_dispatcher("%o", NULL);
// 	// ft_pf_dispatcher("%p", NULL);
// 	// ft_pf_dispatcher("%s", NULL);
// 	// ft_pf_dispatcher("%u", NULL);
// 	// ft_pf_dispatcher("%x", NULL);
// 	// ft_pf_dispatcher("%X", NULL);

// 	// ft_pf_dispatcher("%lc", NULL);
// 	// ft_pf_dispatcher("%ld", NULL);
// 	// ft_pf_dispatcher("%lf", NULL);
// 	// ft_pf_dispatcher("%li", NULL);
// 	// ft_pf_dispatcher("%lo", NULL);
// 	// ft_pf_dispatcher("%lp", NULL);
// 	// ft_pf_dispatcher("%ls", NULL);
// 	// ft_pf_dispatcher("%lu", NULL);
// 	// ft_pf_dispatcher("%lx", NULL);
// 	// ft_pf_dispatcher("%lX", NULL);

// 	// ft_pf_dispatcher("%llc", NULL);
// 	// ft_pf_dispatcher("%lld", NULL);
// 	// ft_pf_dispatcher("%llf", NULL);
// 	// ft_pf_dispatcher("%lli", NULL);
// 	// ft_pf_dispatcher("%llo", NULL);
// 	// ft_pf_dispatcher("%llp", NULL);
// 	// ft_pf_dispatcher("%lls", NULL);
// 	// ft_pf_dispatcher("%llu", NULL);
// 	// ft_pf_dispatcher("%llx", NULL);
// 	// ft_pf_dispatcher("%llX", NULL);

// 	// ft_pf_dispatcher("%hc", NULL);
// 	// ft_pf_dispatcher("%hd", NULL);
// 	// ft_pf_dispatcher("%hf", NULL);
// 	// ft_pf_dispatcher("%hi", NULL);
// 	// ft_pf_dispatcher("%ho", NULL);
// 	// ft_pf_dispatcher("%hp", NULL);
// 	// ft_pf_dispatcher("%hs", NULL);
// 	// ft_pf_dispatcher("%hu", NULL);
// 	// ft_pf_dispatcher("%hx", NULL);
// 	// ft_pf_dispatcher("%hX", NULL);

// 	// ft_pf_dispatcher("%hhc", NULL);
// 	// ft_pf_dispatcher("%hhd", NULL);
// 	// ft_pf_dispatcher("%hhf", NULL);
// 	// ft_pf_dispatcher("%hhi", NULL);
// 	// ft_pf_dispatcher("%hho", NULL);
// 	// ft_pf_dispatcher("%hhp", NULL);
// 	// ft_pf_dispatcher("%hhs", NULL);
// 	// ft_pf_dispatcher("%hhu", NULL);
// 	// ft_pf_dispatcher("%hhx", NULL);
// 	// ft_pf_dispatcher("%hhX", NULL);
// 	return (0);
// }
