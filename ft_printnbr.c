/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:49:05 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/06 10:49:46 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printnbr(va_list lst, size_t *counter)
{
	int		value;

	value = (int)va_arg(lst, int);
	if (ft_putnbr(value, counter))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
