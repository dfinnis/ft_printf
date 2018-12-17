/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:02:28 by dfinnis           #+#    #+#             */
/*   Updated: 2018/12/17 14:27:06 by svaskeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_len(uintmax_t n)
{
	int			len;

	len = 1;
	while ((n /= 10) > 0)
		len++;
	return (len);
}

char		*ft_itoa_unsigned(uintmax_t n)
{
	char	*fresh;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_find_len(n);
	if (!(fresh = ft_strnew(len + 1)))
		return (NULL);
	fresh[len + 1] = '\0';
	while (n > 0)
	{
		fresh[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (fresh);
}
