/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:40:26 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/27 21:40:19 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	return (dest);
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] ="salam yousra" ;
	char b[12];

	ft_memmove(b,a,0);
	
	printf("ft_memmove : %s \n, b : %s \n",(char*)ft_memmove("salam",NULL,0),b);
	
	char *aa = NULL;
	char bb[12];

	printf("memmove : %s \n, bb : %s \n",(char*)memmove("salam",NULL,3),bb);
}
*/
