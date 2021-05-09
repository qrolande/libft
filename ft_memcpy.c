#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t;
	unsigned char	*y;
	int				i;

	t = (unsigned char *) dst;
	y = (unsigned char *) src;
	i = 0;
	if ((t == '\0') && (y == '\0'))
		return (dst);
	while (n != 0)
	{
		t[i] = y[i];
		i++;
		n--;
	}
	return (dst);
}
