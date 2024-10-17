#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		temp;
	int		pow;
	char	c;
	long	l;

	l = n;
	pow = 1;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = -l;
	}
	temp = l;
	while (temp / 10)
	{
		pow *= 10;
		temp = temp / 10;
	}
	while (l / 10)
	{
		c = 48 + (l / pow);
		write(fd, &c, 1);
		l = l % pow;
		pow = pow / 10;
	}
	c = l + 48;
	write(fd, &c, 1);
}
