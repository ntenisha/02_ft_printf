/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:57:36 by ntenisha          #+#    #+#             */
/*   Updated: 2022/01/10 20:57:36 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putpnbr_fd(unsigned long int n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *s);
int		ft_puthex(unsigned int n, int fd, int isUpper);
int		ft_putunbr_fd(unsigned int u, int fd);

int		ft_find_arg(const char *str, va_list ap);
int		ft_printf(const char *str, ...);

#endif
