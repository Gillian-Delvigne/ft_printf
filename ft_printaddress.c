/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:58:51 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/03 10:44:20 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printaddress(va_list lst, size_t *counter)
{
	void	*value;

	value = (void *)va_arg(lst, void *);
	if (ft_putaddress(value, counter))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
