/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:33:52 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/07 16:50:50 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putuint(unsigned int nb, size_t *counter)
{
	if (nb < 10)
	{
		if (ft_putchar(nb + '0', counter))
			return (EXIT_FAILURE);
	}
	else
	{
		if (ft_putuint(nb / 10, counter))
			return (EXIT_FAILURE);
		if (ft_putchar(nb % 10 + '0', counter))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
