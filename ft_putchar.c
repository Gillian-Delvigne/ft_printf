/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:35:17 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/03 09:49:45 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putchar(char c, size_t *counter)
{
	if (write(1, &c, 1) < 0)
		return (EXIT_FAILURE);
	(*counter)++;
	return (EXIT_SUCCESS);
}
