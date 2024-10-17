#include "libft.h"
#include <stdio.h>

int main()
{
	int	test;
	
	printf("test num:");
	scanf("%d", &test);
	if (test == 0)
	{
		printf("---------------ft_is* and ft_to* test---------------<ctype.c>\n");

		printf("isalnum return : %d\n",ft_isalnum('A'));

		printf("isalpha return : %d\n",ft_isalpha('A'));

		printf("isascii return : %d\n",ft_isascii(1111));

		printf("isdigit return : %d\n",ft_isdigit('9'));

		printf("isprint return : %d\n",ft_isprint(5));

		printf("toupper return : %c\n",ft_toupper('c'));

		printf("tolower return : %c\n",ft_tolower('A'));
	}

	if (test == 1)
	{
		char dest[50] = "salam, labas!";
		char dest1[50] = "salam, labas!";
		char src[50] = "salam , lbas";
		char cmp1[] = "aaa";
		char cmp2[] = "aab";
		char overlap[] = "salam ,labs";
	
		printf("---------------ft_mem* and ft_bzero test---------------<strings.h>\n");

		printf("ft_memset return : %s\n", (char *)ft_memset(dest, '*', 5));//fills the first n = 5 byte of dest with the byte c

		printf("ft_memcpy return : %s\n", (char *)ft_memcpy(dest1, src, 6));//copier n = 6 bytes from mem area src to dest (overlap problem)

		printf("ft_memmove return : %s\n", (char *)ft_memmove(overlap + 2, overlap, 4)); //like memcpy, just fix overlapping problem yeeeee!

		printf("ft_memchr return : %s\n", (char *)ft_memchr(cmp2, 'b', 7));//look for c = 'd' for the first n bytes in mem_str.

		printf("ft_memcmp return : %d\n", ft_memcmp(cmp1, cmp2, 6)); //compare the first n  = 6 bytes and return pos if c1>c2 ...

		ft_bzero(cmp1, 7);
		printf("ft_bzero return : %d\n",*cmp1); //write zeros in the first n = 7 of src2

	}
	if (test == 2)
	{

		char dest[50] = "hello, world!";
		char dest2[50] = "hello, world!";
		char dest3[50] = "hello, world!";
		char src[] = "1337";
		char cmp1[] = "abcefgh";
		char cmp2[] = "abcefgh";
		char *dup_str;

		printf("---------------ft_str* test---------------<string.h><stdlib.h>\n");

		printf("ft_strlen of '%s' : %zu\n", dest, ft_strlen(dest));

		ft_strlcpy(dest, src, sizeof(dest));
		printf("ft_strlcpy : %s\n", dest);


		ft_strlcat(dest2, src, sizeof(dest));
		printf("ft_strlcat : %s\n", dest);

		printf("ft_strncmp (cmp1 vs cmp2) : %d\n", ft_strncmp("abcdefghij", "abcdefgxyz", 3)); // compare the first n = 3 elemnt of cmp1 & cmp2

		printf("ft_strchr (search for 'o') : %s\n", ft_strchr(dest3, 'o'));// first occur

		printf("ft_strrchr (search for 'o') : %d\n", ft_strrchr(dest3, 3));//last occur 
		//printf("the addresse of last one is %p\n", dest3 + 13);

		dup_str = ft_strdup(dest);
		printf("ft_strdup : %s\n", dup_str);
		free(dup_str);

		printf("ft_strnstr : %s\n", ft_strnstr("hello, world!", "world", 5));//search for wrold in the first n bytes of hel...

		printf("ft_atoi (1337) : %d\n", ft_atoi("1337"));

		int *arr = ft_calloc(5, sizeof(int));//allocate n = 5 block of size int in this case init with 0
		if (arr)
		{
			for (int i = 0; i < 5; i++)
				printf("ft_calloc arr[%d] : %d\n", i, arr[i]);
			free(arr);
		}
	}
}

