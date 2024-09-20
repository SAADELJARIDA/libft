#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*((unsigned char*)dest + i) =  *((unsigned char*)src + i);
		i++;
	}
	return (dest);
}

/*#include<stdio.h>
#include<string.h>
int main()
{
	char a[] = "saadjarida";
	char *b  = NULL;
	
	printf("%s \n",(char *) ft_memcpy(b,a,0));

	char aa[] = "saad";
	char *bb = NULL;

	printf("%s \n",(char *) memcpy(bb,aa,0));
}
*/
