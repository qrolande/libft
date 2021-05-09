#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *) s;
	i = 0;
	while (n != 0)
	{
		if (a[i] == (unsigned char) c)
			return (a + i);
		i++;
		n--;
	}
	return (NULL);
}
