#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len > 0)
	{
		a[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}
