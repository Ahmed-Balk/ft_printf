/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:25:18 by abalk             #+#    #+#             */
/*   Updated: 2024/11/24 19:35:18 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_hexadd(unsigned long long ptr)
{
	size_t	count;

	count = 0;
	if (ptr >= 16)
	{
		count += ft_hexadd(ptr / 16);
		count += ft_hexadd(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			count += ft_putchar(ptr + '0');
		else
			count += ft_putchar(ptr - 10 + 'a');
	}
	return (count);
}

size_t	ft_putadd(void *ptr)
{
	unsigned long	add;

	add = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	else
	{
		return (ft_putstr("0x") + ft_hexadd(add));
	}
}
