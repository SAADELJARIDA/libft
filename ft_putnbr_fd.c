/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:42:37 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/27 23:46:49 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert(long l, int fd, int pow)
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
	ft_convert(l, fd, pow);
}
