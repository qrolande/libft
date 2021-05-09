#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	o;
	int		len;

	i = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	o = ft_strlen(dst);
	if (o > dstsize)
	{
		while (src[i] != '\0')
			i++;
		return (dstsize + i);
	}
	while (dstsize > 0 && o < dstsize - 1 && src[i] != '\0')
		dst[o++] = src[i++];
	dst[o] = '\0';
	return (len);
}
