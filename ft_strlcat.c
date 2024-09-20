#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	j;

	src_len = ft_strlen(src);
	if (!dst && !size)
	{
		return (src_len);
	}
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	i = dst_len;
	j = 0;
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
   	 char dest[10] ="hello" ;
  	  const char *src = " world!";
        char ddest[10]= "hello";
    	const char *ssrc = " world!";
	
    size_t result = strlcat(dest, src, 7);

    printf("After strlcat: '%s'\n", dest);
   printf("Result length: %zu\n", result);

printf("------------------------------FT_STRLCAT-----------------\n");

   size_t rresult = ft_strlcat(ddest, ssrc, 7);
    printf("After strlcat: '%s'\n",ddest);
    printf("Result length: %zu\n", rresult);

    return 0;
}
*/
