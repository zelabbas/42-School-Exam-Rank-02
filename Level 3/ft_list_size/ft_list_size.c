#include "ft_list.h"
// 1
int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}
// 2
int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	if (begin_list == 0)
		return (count);
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}
// chose!
