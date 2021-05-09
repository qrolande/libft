#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	res;

	res = count * size;
	str = (char *)malloc(sizeof(char) * res);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, res);
	return (str);
}
