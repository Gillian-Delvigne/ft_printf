/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:30:24 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/07 15:23:30 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_put_minint(size_t *counter)
{
	if (ft_putstr("-2147483648", counter))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

size_t	ft_putnbr(int nb, size_t *counter)
{
	if (nb < 0)
	{
		if (nb == INT_MIN)
			return (ft_put_minint(counter));
		else
		{
			nb = -nb;
			if (ft_putchar('-', counter))
				return (EXIT_FAILURE);
		}
	}
	if (nb < 10)
	{
		if (ft_putchar(nb + '0', counter))
			return (EXIT_FAILURE);
	}
	else
	{
		if (ft_putnbr(nb / 10, counter))
			return (EXIT_FAILURE);
		if (ft_putchar(nb % 10 + '0', counter))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
