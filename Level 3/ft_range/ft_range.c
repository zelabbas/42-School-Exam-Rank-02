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
	len = v_abs(end - start) + 1;
	ptr = (int *)malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start < end)
		{
			ptr[i] = start;
			start++;
		}
		else
		{
			ptr[i] = start;
			start--;
		}
		i++;
	}
	return (ptr);
}
