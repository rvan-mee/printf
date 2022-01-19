#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (write(1, "(null)", 6));
	i = ft_strlen(s);
	write(1, s, i);
	return (i);
}
