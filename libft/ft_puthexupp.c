/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puthexupp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-mee <rvan-mee@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 16:48:00 by rvan-mee      #+#    #+#                 */
/*   Updated: 2022/01/21 16:53:13 by rvan-mee      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupp(unsigned long i)
{
	int		len;

	len = 0;
	if (i > 15)
		len += ft_puthexupp(i / 16);
	i %= 16;
	if (i < 10)
		i += '0';
	else
		i += 'A' - 10;
	return (len + write(1, &i, 1));
}
