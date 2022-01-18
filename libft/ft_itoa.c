#include "ft_printf.h"

void	recursive(long n, int *i, char *str)
{
	if (n > 9)
		recursive(n / 10, i, str);
	n %= 10;
	str[*i] = n + 48;
	*i += 1;
}

char	*ft_itoa(int n)
{
	char		*str;
	int			neg;
	int			i;
	long		j;

	i = 0;
	neg = 0;
	j = n;
	if (j < 0)
	{
		j *= -1;
		neg++;
		i++;
	}
	str = malloc(sizeof(char) * intlength(j) + neg + 1);
	if (str == 0)
		return (0);
	if (neg == 1)
		str[0] = '-';
	recursive(j, &i, str);
	str[i] = '\0';
	return (str);
}
