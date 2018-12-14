/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaskeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:07:16 by svaskeli          #+#    #+#             */
/*   Updated: 2018/12/14 11:09:43 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_int(t_print *all, va_list ap)
{
	intmax_t	num;
	char		*num_str;

	if (all->z)
		num = (intmax_t)va_arg(ap, size_t);
	else if (all->j)
		num = va_arg(ap, intmax_t);
	else if (all->l)
		num = (intmax_t)va_arg(ap, long);
	else if (all->ll)
		num = (intmax_t)va_arg(ap, long long);
	else if (all->h)
		num = (intmax_t)(short)va_arg(ap, int);
	else if (all->hh)
		num = (intmax_t)(signed char)va_arg(ap, int);
	else
		num = va_arg(ap, int);
	if (num < 0)
	{
		all->sign = 1;
		num = -num;
	}
	if ((all->type == 'd' || all->type == 'i') && !all->precision && all->prec_set && num == 0)
		num_str = ft_strdup("");
	else
		num_str = ft_itoa_mod(num);
		//ft_error
	ft_justify(num_str, all);
	free(num_str);
}

void		ft_unsigned(t_print *all, va_list ap)
{
	uintmax_t	num;
	char		*num_str;

	if (all->j || all->z)
		num = va_arg(ap, uintmax_t);
	else if (all->l)
		num = (uintmax_t)va_arg(ap, unsigned long);
	else if (all->ll)
		num = (uintmax_t)va_arg(ap, unsigned long long);
	else if (all->h)
		num = (uintmax_t)(unsigned short)va_arg(ap, unsigned int);
	else if (all ->hh)
		num = (uintmax_t)(unsigned char)va_arg(ap, unsigned int);
	else
		num = (uintmax_t)va_arg(ap, unsigned int);
	if (all->type == 'u' && !all->precision && all->prec_set && num == 0)
		num_str = ft_strdup("");
	else
		num_str = ft_itoa_unsigned(num);
			//ft_error
	ft_justify(num_str, all);
	free(num_str);
}

void		ft_int_octal(t_print *all, va_list ap)
{
	uintmax_t	num;
	char		*num_str;

	if (all->j || all->z)
		num = va_arg(ap, uintmax_t);
	else if (all->l)
		num = (uintmax_t)va_arg(ap, unsigned long);
	else if (all->ll)
		num = (uintmax_t)va_arg(ap, unsigned long long);
	else if (all->h)
		num = (uintmax_t)(unsigned short)va_arg(ap, unsigned int);
	else if (all->hh)
		num = (uintmax_t)(unsigned char)va_arg(ap, unsigned int);
	else
		num = (uintmax_t)va_arg(ap, unsigned int);
	if (num == 0)
		all->num_zero = 1;
	if (!all->hex_o_zero || all->sharp)
		num_str = ft_itoa_base(num, 8, all->type);
			//ft_error
	else
		num_str = ft_strdup("");
			//ft_error
	if (all->sharp && all->precision)
		all->precision--;
	ft_justify(num_str, all);
	free(num_str);
}

void		ft_int_hex(t_print *all, va_list ap)
{
	uintmax_t	num;
	char		*num_str;

	if (all->j || all->z)
		num = va_arg(ap, uintmax_t);
	else if (all->l)
		num = (uintmax_t)va_arg(ap, unsigned long);
	else if (all->ll)
		num = (uintmax_t)va_arg(ap, unsigned long long);
	else if (all->h)
		num = (uintmax_t)(unsigned short)va_arg(ap, unsigned int);
	else if (all->hh)
		num = (uintmax_t)(unsigned char)va_arg(ap, unsigned int);
	else
		num = (uintmax_t)va_arg(ap, unsigned int);
	if (num == 0)
		all->num_zero = 1;
	if (!all->hex_o_zero)
		num_str = ft_itoa_base(num, 16, all->type);
			//ft_error
	else
		num_str = ft_strdup("");
	ft_justify(num_str, all);
	free(num_str);
}

void		ft_number(t_print *all, va_list ap)
{
	if (all->type == 'i' || all->type == 'd')
		ft_int(all, ap);
	else if (all->type == 'u')
		ft_unsigned(all, ap);
	else if (all->type == 'o')
		ft_int_octal(all, ap);
	else if (all->type == 'x' || all->type == 'X')
		ft_int_hex(all, ap);
}
