/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:58:18 by ntenisha          #+#    #+#             */
/*   Updated: 2022/01/10 20:58:18 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;

	va_start(ap, str);
	counter = 0;
	while (*str != 0)
	{
		if (*str == '%' && *(str + 1) != 0)
		{
			str++;
			counter += ft_find_arg(str, ap);
		}
		else
			counter += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(ap);
	return (counter);
}
