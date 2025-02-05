/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:22:25 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/06 10:49:46 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printhex(va_list lst, size_t *counter, char flag)
{
	unsigned int	value;

	value = (unsigned int)va_arg(lst, unsigned int);
	if (flag == 'x')
	{
		if (ft_putnbrbase(value, HEX_BASE_LOW, counter))
			return (EXIT_FAILURE);
	}
	if (flag == 'X')
	{
		if (ft_putnbrbase(value, HEX_BASE_UP, counter))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
