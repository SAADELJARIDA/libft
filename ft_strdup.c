#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *d;
	size_t	sz;

	sz = ft_strlen(s) + 1;
	d = (char *)malloc(sz);
	if (d)
		ft_memcpy(d, s, sz);
	return (d);
}
