#include "ft_printf.h"

int	ft_puthexlow(unsigned long i)
{
	int		len;

	len = 0;
	if (i > 15)
		len += ft_puthexlow(i / 16);
	i %= 16;
	if (i < 10)
		i += 48;
	else
		i += 87;
	return (len + write(1, &i, 1));
}
