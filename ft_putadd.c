/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:25:18 by abalk             #+#    #+#             */
/*   Updated: 2024/11/19 09:04:53 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putadd(void *ptr)
{
	unsigned long	add;

	add = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	else
		return (ft_putstr("0x") + ft_puthexa_lower((unsigned int)(add >> 32))
				+ ft_puthexa_lower((unsigned int)add));
}
