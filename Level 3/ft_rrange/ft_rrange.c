#include <stdlib.h>
int v_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
int     *ft_range(int start, int end)
{
	int len;
	int *ptr;
	int i;
	int pas = 1;
	len = v_abs(end - start) + 1;
	ptr = (int *)malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	if (start < end)
		pas = -1;
	while (i < len)
	{
		ptr[i] = end;
		end += pas;
		i++;
	}
	return (ptr);
}
