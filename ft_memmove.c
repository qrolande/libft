#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	i = 0;
	if (d == NULL && s == NULL)
		return (dst);
	if (s < d)
	{
		while (len > i)
		{
			d[len - 1 - i] = s[len - 1 - i];
			i++;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
