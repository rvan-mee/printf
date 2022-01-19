#include "ft_printf.h"

int	write_format(char flag, va_list *ap)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (flag == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (flag == 'p')
		return (write(1, "0x", 2) + ft_puthexlow(va_arg(*ap, unsigned long)));
	else if (flag == 'd')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (flag == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (flag == 'u')
		return (ft_putunsigned(va_arg(*ap, unsigned int)));
	else if (flag == 'x')
		return (ft_puthexlow(va_arg(*ap, unsigned int)));
	else if (flag == 'X')
		return (ft_puthexupp(va_arg(*ap, unsigned int)));
	else if (flag == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		printed_chars;
	int		i;

	i = 0;
	printed_chars = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			printed_chars += write_format(str[i], &ap);
		}
		else
			printed_chars += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (printed_chars);
}
