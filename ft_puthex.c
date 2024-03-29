/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:58:29 by ntenisha          #+#    #+#             */
/*   Updated: 2022/01/10 20:58:29 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int fd, int isUpper)
{
	char			*table;
	int				counter;

	counter = 0;
	if (isUpper)
		table = "0123456789ABCDEF";
	else
		table = "0123456789abcdef";
	if (n >= 16)
	{
		counter += ft_puthex(n / 16, fd, isUpper);
		counter += ft_puthex(n % 16, fd, isUpper);
	}
	else
		counter += ft_putchar_fd(table[n], fd);
	return (counter);
}
