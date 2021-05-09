#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *) s;
	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}
