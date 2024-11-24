/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:44:47 by abalk             #+#    #+#             */
/*   Updated: 2024/11/24 19:36:22 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
size_t	ft_putchar(const char c);
size_t	ft_putnbr(const int n);
size_t	ft_putstr(const char *str);
size_t	ft_puthexa_upper(unsigned int n);
size_t	ft_puthexa_lower(unsigned int n);
size_t	ft_putadd(void *ptr);
size_t	ft_printunsigned(unsigned int nb);

#endif
