/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nier <nier@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 19:22:38 by nier              #+#    #+#             */
/*   Updated: 2025/07/30 19:22:39 by nier             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb, int c)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (nb > 15)
		count += ft_puthex(nb / 16, c);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
