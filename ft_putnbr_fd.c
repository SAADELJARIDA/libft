/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:42:37 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/29 23:03:09 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert(int l, int fd, int pow)
{
	char	c;

	while (pow)
	{
		c = 48 + (l / pow);
		write(fd, &c, 1);
		l = l % pow;
		pow = pow / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		temp;
	int		pow;

	pow = 1;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
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
	ft_convert(n, fd, pow);
}
