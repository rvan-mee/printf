#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	write(1, s, i);
	return (i);
}
