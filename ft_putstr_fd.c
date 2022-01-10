/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:58:40 by ntenisha          #+#    #+#             */
/*   Updated: 2022/01/10 20:58:40 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		counter += ft_putstr_fd("(null)", fd);
		return (counter);
	}
	counter = ft_strlen(s);
	write(fd, s, counter);
	return (counter);
}
