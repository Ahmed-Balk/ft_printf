/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:02:56 by abalk             #+#    #+#             */
/*   Updated: 2024/11/19 09:10:03 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexa_lower(unsigned int n)
{
	char	*hex_digits;
	char	buf[9];
	int		i;
	int		count;

	i = 0;
	count = 0;
	hex_digits = "0123456789abcdef";
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		buf[i++] = hex_digits[n % 16];
		n /= 16;
	}
	while (i--)
		count += ft_putchar(buf[i]);
	return (count);
}
