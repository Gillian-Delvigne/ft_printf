/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putulong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:29:15 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/07 16:51:28 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_putulong(unsigned long long nb, char *base, size_t *counter)
{
	size_t	basesize;

	basesize = ft_strlen(base);
	if (nb < basesize)
	{
		if (ft_putchar(base[nb], counter))
			return (EXIT_FAILURE);
	}
	else
	{
		if (ft_putulong(nb / basesize, base, counter))
			return (EXIT_FAILURE);
		if (ft_putchar(base[nb % basesize], counter))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
