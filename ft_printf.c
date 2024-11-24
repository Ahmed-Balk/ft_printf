/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:27:15 by abalk             #+#    #+#             */
/*   Updated: 2024/11/24 19:18:05 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	conv(const char *c, va_list *ap)
{
	if (*c == 'd' || *c == 'i')
		return (ft_putnbr(va_arg(*ap, const int)));
	if (*c == 'c')
		return (ft_putchar((char) va_arg(*ap, int)));
	if (*c == 's')
		return (ft_putstr(va_arg(*ap, const char *)));
	if (*c == 'x')
		return (ft_puthexa_lower(va_arg(*ap, unsigned int)));
	if (*c == 'X')
		return (ft_puthexa_upper(va_arg(*ap, unsigned int)));
	if (*c == '%')
		return (ft_putchar('%'));
	if (*c == 'u')
		return (ft_printunsigned(va_arg(*ap, unsigned int)));
	if (*c == 'p')
		return (ft_putadd(va_arg(*ap, void *)));
	else if (*c && *(c + 1))
		return (ft_putchar(*(c - 1)) + ft_putchar(*(c)));
	else
	{
		return (-1);
	}
}

int	ft_printf(const char *str, ...)
{
	int		pr_char;
	int		tmp;
	va_list	args;

	if (!str)
		return (0);
	va_start(args, str);
	pr_char = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			tmp = conv(str, &args);
		}
		else
			tmp = ft_putchar(*str);
		if (tmp >= 0)
			pr_char += tmp;
		else
			pr_char = tmp;
		str++;
	}
	va_end(args);
	return (pr_char);
}
