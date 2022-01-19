#ifndef FT_PRINTF_H
# define  FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_printf(const char *str, ...);
int		write_format(char flag, va_list *input);
int		ft_atoi(const char *nptr);
int		intlength(long n);
char	*ft_itoa(int n);
void	recursive(long n, int *i, char *str);
int		ft_putchar(char c);
int		ft_puthexlow(unsigned long i);
int		ft_puthexupp(unsigned long i);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int i);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
int		ft_isspace(int c);
#endif
