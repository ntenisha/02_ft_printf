/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:58:36 by ntenisha          #+#    #+#             */
/*   Updated: 2022/01/10 20:58:36 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpnbr_fd(unsigned long int n, int fd)
{
	int					counter;
	const char			*table;

	table = "0123456789abcdef";
	counter = 0;
	if (n > 15)
	{
		counter += ft_putpnbr_fd(n / 16, fd);
		counter += ft_putpnbr_fd(n % 16, fd);
	}
	else
		counter += ft_putchar_fd(table[n], fd);
	return (counter);
}
