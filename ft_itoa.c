#include "libft.h"
#include <stdio.h>

static int	digit_nbr(int n)
{
	int	count;

	count = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		number_of_digits;

	number_of_digits = digit_nbr(n);
	if (n < 0)
	{
		number_of_digits++;
		ptr = malloc(number_of_digits);
		ptr[0] = '-';
		n *= -1;
	}
	else
		ptr = malloc(number_of_digits + 1);
	if (!ptr)
		return (0);
	ptr[number_of_digits] = 0;
	while (n)
	{
		ptr[number_of_digits - 1] = n % 10 + 48;
		n = n / 10;
		number_of_digits--;
	}
	return (ptr);
}
