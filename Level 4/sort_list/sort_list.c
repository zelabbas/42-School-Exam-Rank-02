#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int donnee;

	tmp = lst
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			donnee = lst->data;
			lst->data = lst->next->data;
			lst->next->data = donnee;
			lst = tmp;
		}
		else
		 	lst = lst->next;
	}
	return (tmp);
}
