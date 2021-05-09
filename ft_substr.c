#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	len_s;

	i = 0;
	if (s == 0)
		return (NULL);
	len_s = ft_strlen(s);
	if ((size_t) start >= len_s)
		len = 0;
	if (len > len_s - start)
		len = len_s - start;
	substr = (char *)malloc(sizeof (char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	len += (size_t) start;
	while (len > (size_t) start)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
