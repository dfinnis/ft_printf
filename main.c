/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 09:15:30 by svaskeli          #+#    #+#             */
/*   Updated: 2018/12/15 19:34:36 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// MANDATORY
// can use: write, malloc, free, exit, <stdarg.h>
// conversions: c, s, p
// conversions: d, i, o, u, x, X with flags: hh, h, l, ll
// conversion f with flags L and l
// flags: #, 0, -, +, space, min width, precision
// %%

// BONUS
// conversions: e, g with L flag
// flags: *, $, '
// %b for binary, %r for non printables, %k for date
// colors, fd, etc.

void	ft_print_struct(t_print *all)
{
	printf("\tprinted: %d\n", all->printed);
	printf("\tlen: %d\n", all->len);
	printf("\tform: %s\n", all->form);
	printf("\ttype: %c\n", all->type);
	printf("\thh: %d\n", all->hh);
	printf("\th: %d\n", all->h);
	printf("\tj: %d\n", all->j);
	printf("\tll: %d\n", all->ll);
	printf("\tl: %d\n", all->l);
	printf("\tL: %d\n", all->L);
	printf("\tz: %d\n", all->z);
	printf("\tsharp: %d\n", all->sharp);
	printf("\tzero: %d\n", all->zero);
	printf("\tminus: %d\n", all->minus);
	printf("\tplus: %d\n", all->plus);
	printf("\tspace: %d\n", all->space);
	printf("\twidth: %d\n", all->width);
	printf("\tprecision: %d\n", all->precision);
	printf("\tprec_set: %d\n", all->prec_set);
	printf("\tfloat_multi: %d\n", all->float_multi);
	printf("\tlong_float: %d\n", all->long_float);
	printf("\thex_o_zero: %d\n", all->hex_o_zero);
	printf("\tnum_zero: %d\n", all->num_zero);
	printf("\tchar_zero: %d\n", all->char_zero);
	printf("\tprint_negative: %d\n", all->print_negative);
	printf("\twild_width: %d\n", all->wild_width);
	printf("\tall->wild_prec: %d\n", all->wild_prec);
	printf("\tsign: %d\n", all->sign);
}

int 	main(void)
{
	// ft_printf("1ft. b'% 0+-#10.5llx\\n'\n", 42);
	// printf("1rl. b'% 0+-#10.5llx\\n'\n", 42);
	// ft_printf("2ft. b'%+-0#2x\\\\n'\n", 0);
	// printf("2rl. b'%+-0#2x\\\\n'\n", 0);

	printf("rl: b'% +0#-4.5hhs', b'foo'");
	ft_printf("ft: b'% +0#-4.5hhs', b'foo'");

//	printf("rl. b'% 0+-#10.5llU\\n'\n", 42);
//	ft_printf("ft. b'% 0+-#10.5llU\\n'\n", 42);
//	printf("rl. b'%#3%\\n'\n");
//	ft_printf("ft. b'%#3%\\n'\n");
//	printf("rl. b'%#.2o\\n'\n", 0);
//	ft_printf("ft. b'%#.2o\\n'\n", 0);
//	ft_printf("ft. b'%-+0# 10hh%\\n'\n");
//	printf("rl. b'%-+0# 10hh%\\n'\n");
//	printf("rl. b'% 010u\\n'\n", 0);
//	ft_printf("ft. b'% 010u\\n'\n", 0);
//	printf("rl. b'% 02u\\n'\n", 0);
//	ft_printf("ft. b'% 02u\\n'\n", 0);
//	printf("rl. b'%+-0#2u\\n'\n", 0);
//	ft_printf("ft. b'%+-0#2u\\n'\n", 0);
//	printf("rl. b'% 0+-#10.5llu\\n'\n", 42);
//	ft_printf("ft. b'% 0+-#10.5llu\\n'\n", 42);
}

/*int	main(void) // testing parsing into struct
{
	char	*form;
	t_print	all;
	int		i;

	i = 0;
	form = "+5.7ld. string";
	ft_init(&all);
	all.form = form;
	all.len = i;
	printf("Before Parse:\n");
	ft_print_struct(&all);
	ft_parse(&all);
	printf("\nAfter Parse:\n");
	ft_print_struct(&all);
	return (0);
}*/

