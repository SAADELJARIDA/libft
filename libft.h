#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalnum(int c);
int		isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
#endif
