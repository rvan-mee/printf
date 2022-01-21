/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-mee <rvan-mee@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 16:48:03 by rvan-mee      #+#    #+#                 */
/*   Updated: 2022/01/21 16:48:04 by rvan-mee      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	i;
	int		len;

	i = n;
	len = 0;
	if (i < 0)
	{
		i *= -1;
		len += write(1, "-", 1);
	}
	if (i > 9)
		len += ft_putnbr(i / 10);
	i %= 10;
	i += 48;
	return (len + write(1, &i, 1));
}
