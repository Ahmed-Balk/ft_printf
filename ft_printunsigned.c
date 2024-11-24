/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalk <abalk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:58:36 by abalk             #+#    #+#             */
/*   Updated: 2024/11/24 19:17:04 by abalk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*unsigned_itoa(unsigned int nb)
{
	unsigned int	nbr;
	char			*num;
	int				i;

	nbr = nb;
	i = 0 ;
	while (nb)
	{
		i++ ;
		nb = nb / 10 ;
	}
	num = (char *)malloc(sizeof(char) * (i + 1));
	if (!num)
		return (NULL);
	num[i] = '\0';
	while (nbr)
	{
		num[i - 1] = nbr % 10 + 48 ;
		nbr = nbr / 10 ;
		i-- ;
	}
	return (num);
}

size_t	ft_printunsigned(unsigned int nb)
{
	char	*num;
	size_t	count;

	count = 0;
	if (!nb)
		return (ft_putchar('0'));
	else
	{
		num = unsigned_itoa(nb);
		count += ft_putstr(num);
		free(num);
	}
	return (count);
}
