#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		res;

	res = 0;
	while (lst != 0)
	{
		lst = lst->next;
		res++;
	}
	return (res);
}
