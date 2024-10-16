#include "libft.h"

static int	is_it(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && is_it(s1[start], set))
		start++;
	while (end > start && is_it(s1[end], set))
		end--;
	return (ft_substr(s1, start, end + 1 - start));
}
/*
#include<stdio.h>

int main()
{
	char a[] = "----------";
	char b[] = "-";
	printf("%s",ft_strtrim(a,b));
}
*/
