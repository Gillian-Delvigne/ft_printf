/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:23:19 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/06 10:49:46 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printuint(va_list lst, size_t *counter)
{
	unsigned int		value;

	value = (unsigned int)va_arg(lst, unsigned int);
	if (ft_putuint(value, counter))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
