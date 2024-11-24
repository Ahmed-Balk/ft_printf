/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:11:23 by abalk             #+#    #+#             */
/*   Updated: 2024/11/19 09:15:23 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(const int n)
{
	size_t	count;
	char	buff[12];
	long	num;
	int		i;

	num = n;
	count = 0;
	if (num == 0)
		return (ft_putchar('0'));
	if (num < 0)
	{
		num = -num;
		count += ft_putchar('-');
	}
	i = 0;
	while (num > 0)
	{
		buff[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i--)
	{
		count += ft_putchar(buff[i]);
	}
	return (count);
}
