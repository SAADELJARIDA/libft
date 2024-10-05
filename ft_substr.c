#include "libft.h"
#include <stdio.h>
char	*ft_substr(char const  *s, unsigned int start, size_t len)
{
	char *ptr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
	{
		ptr = malloc(1);
		*ptr = 0;
		return (ptr);
	}
	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	while (i < len && s[start + i])
	{
		ptr[i] = s[start+i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main()
{
	char	b[] = "salam labas?";
	char *p;
	char *p1;
	p = ft_substr(b, 3,30);
	printf("%s\n",p);
	free(p);
	printf("-----------------------48func----------------\n");
	p1=ft1_substr(b,3,20);
	printf("%s\n",p1);
}
*/
