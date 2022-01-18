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
