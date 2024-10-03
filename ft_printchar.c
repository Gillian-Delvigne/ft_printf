/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelvign <gdelvign@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:38:11 by gdelvign          #+#    #+#             */
/*   Updated: 2023/11/09 17:44:17 by gdelvign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printchar(va_list lst, size_t *counter)
{
	void		*value;

	value = (char *)va_arg(lst, char *);
	if (ft_putchar((char)value, counter))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
