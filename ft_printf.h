/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-mee <rvan-mee@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/21 16:48:41 by rvan-mee      #+#    #+#                 */
/*   Updated: 2022/01/21 16:52:27 by rvan-mee      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		write_format(char flag, va_list *input);
void	recursive(long n, int *i, char *str);
int		ft_putchar(char c);
int		ft_puthexlow(unsigned long i);
int		ft_puthexupp(unsigned long i);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int i);
size_t	ft_strlen(const char *s);
#endif
