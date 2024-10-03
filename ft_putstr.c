/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:08:20 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/03 11:13:44 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putstr(char *str, size_t *counter)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_putchar(str[i], counter))
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
