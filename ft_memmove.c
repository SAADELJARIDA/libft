#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest <= src)
		ft_memcpy(dest,src,n);
	else
	{
		while (n--)
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	}
	return (dest);
}
/*dd
#include<stdio.h>
#include<string.h>
int main()
{
	char a[] ="salam yousra" ;
	char b[12];

	ft_memmove(b,a,0);
	
	printf("ft_memmove : %s \n, b : %s \n",(char*)ft_memmove(b,a,5),b);
	
	char *aa = NULL;
	char bb[12];

	//printf("memmove : %s \n, bb : %s \n",(char*)memmove(bb,aa,5),bb);
}
*/
