#include <stdio.h>
#include <stdlib.h>

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue;
		}
		words++;
		while (!(str[i] == c) && str[i])
			i++;
	}
	return (words);
}

void	ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	malloc_fill(char **arr, char const *str, char c)
{
	int	i;
	int	chars;
	int 	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue;
		}
		chars = 0;
		while (!(str[i] == c) && str[i])
		{
			chars++;
			i++;
		}
		arr[k] = malloc(chars + 1);	
		ft_strncpy(arr[k], str + i - chars,chars);			
		k++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = malloc((count_words(s, c)  + 1) * sizeof(char *));
	malloc_fill(arr, s, c);
	arr[count_words(s, c) + 1] = 0;
	return (arr);
}
/*
int	main()
{
	char const a[] = "saad eljarida,,,asd asd";
	char **arr;
	int	i;
	int	words;
	char k= ',';
	i = 0;
	arr = ft_split(a,k);
	words = count_words(a,k);
	while(i < words)
	{
		printf("%s\n",arr[i]);	
		i++;
	}
}
*/
