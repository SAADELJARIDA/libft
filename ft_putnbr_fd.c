#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		temp;
	int		pow;
	char	c;

	pow = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	temp = n;
	while (temp / 10)
	{
		pow *= 10;
		temp = temp / 10;
	}
	while (n / 10)
	{
		c = 48 + (n / pow);
		write(fd, &c, 1);
		n = n % pow;
		pow = pow / 10;
	}
	c = n + 48;
	write(fd, &c, 1);
}
