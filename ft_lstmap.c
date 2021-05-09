#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_el;

	if (f == NULL)
		return (NULL);
	new = 0;
	while (lst != 0)
	{
		new_el = ft_lstnew(f(lst->content));
		if (new_el == 0)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, new_el);
		lst = lst->next;
	}
	return (new);
}
