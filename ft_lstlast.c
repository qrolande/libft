#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst != 0)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
