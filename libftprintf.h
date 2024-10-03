/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:57:35 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/03 17:15:41 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

# define HEX_BASE_LOW "0123456789abcdef"
# define HEX_BASE_UP "0123456789ABCDEF"

int		ft_printf(const char *s, ...);
size_t	ft_putchar(char c, size_t *counter);
size_t	ft_putstr(char *str, size_t *counter);
size_t	ft_putnbr(int nb, size_t *counter);
size_t	ft_putuint(unsigned int nb, size_t *counter);
size_t	ft_putaddress(void *ptr, size_t *counter);
size_t	ft_putnbrbase(unsigned int nb, char *base, size_t *counter);
size_t	ft_putulong(unsigned long long nb, char *base, size_t *counter);
size_t	ft_printchar(va_list lst, size_t *counter);
size_t	ft_printstr(va_list lst, size_t *counter);
size_t	ft_printnbr(va_list lst, size_t *counter);
size_t	ft_printuint(va_list lst, size_t *counter);
size_t	ft_printaddress(va_list lst, size_t *counter);
size_t	ft_printhex(va_list lst, size_t *counter, char flag);

#endif