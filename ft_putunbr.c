/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:58:43 by ntenisha          #+#    #+#             */
/*   Updated: 2022/01/10 20:58:43 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_fd(unsigned int u, int fd)
{
	int	counter;

	counter = 0;
	if (u >= 10)
	{
		counter += ft_putnbr_fd(u / 10, fd);
		counter += ft_putnbr_fd(u % 10, fd);
	}
	else
		counter += ft_putchar_fd(u + 48, fd);
	return (counter);
}
