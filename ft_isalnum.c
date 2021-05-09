#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= '9' && c >= '0') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
