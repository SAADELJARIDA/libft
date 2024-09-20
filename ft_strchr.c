char	*ft_strchr(const char *s, int c)
{
	while (c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *) s);
}
