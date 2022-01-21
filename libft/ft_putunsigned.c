/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putunsigned.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-mee <rvan-mee@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 16:48:10 by rvan-mee      #+#    #+#                 */
/*   Updated: 2022/01/21 16:48:11 by rvan-mee      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int i)
{	
	int	len;

	len = 0;
	if (i > 9)
		len += ft_putunsigned(i / 10);
	i %= 10;
	i += 48;
	return (len + write(1, &i, 1));
}
