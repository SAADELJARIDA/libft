#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while ((i < size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h> 
int main() {
	
	char aa[140] = "salam labas" ;
	char bb[140] = "hanya bekher" ;
 	ft_strlcpy(aa,bb,0);
}*/
