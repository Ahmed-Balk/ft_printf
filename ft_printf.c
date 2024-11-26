/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:27:15 by abalk             #+#    #+#             */
/*   Updated: 2024/11/26 11:00:47 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	conv(const char c, va_list *ap)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, const int)));
	if (c == 'c')
		return (ft_putchar((char) va_arg(*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, const char *)));
	if (c == 'x')
		return (ft_puthexa_lower(va_arg(*ap, unsigned int)));
	if (c == 'X')
		return (ft_puthexa_upper(va_arg(*ap, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'u')
		return (ft_printunsigned(va_arg(*ap, unsigned int)));
	if (c == 'p')
		return (ft_putadd(va_arg(*ap, void *)));
	if (c == '\0')
		return (-1);
	else
	{
		return (-1);
	}
}

int	ft_printf(const char *str, ...)
{
	int		pr_char;
	int		i;
	va_list	args;
	int		tmp;

	i = 0;
	va_start(args, str);
	pr_char = 0;
	while (str[i])
	{
		if (str[i] == '%')
			tmp = conv(str[++i], &args);
		else
			tmp = ft_putchar(str[i]);
		if (tmp < 0)
		{
			pr_char = tmp;
			break ;
		}
		else
			pr_char += tmp;
		i++;
	}
	va_end(args);
	return (pr_char);
}
