/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jari <sel-jari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:42:17 by sel-jari          #+#    #+#             */
/*   Updated: 2024/10/27 22:33:22 by sel-jari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (!dst && !size)
		return (src_len);
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	i = dst_len;
	j = 0;
	while (i < (size - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> 
#include <unistd.h>
void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
int main() {
   	 char dest[15] ;
  	  const char *src = " world!";

    	const char *ssrc = " world!";
	memset(dest, 0, 15);
	memset(dest, 'r', 6);	
		dest[11] = 'a';
		ft_print_result(ft_strlcat(dest, "lorem", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
printf("------------------------------FT_STRLCAT-----------------\n");

   //size_t rresult = ft_strlcat(ddest, , 7);
   //printf("After strlcat: '%s'\n",ddest);
   // printf("Result length: %zu\n", rresult);

    return 0;
}
*/
