#include <stdlib.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
char    *ft_strdup(char *src)
{
	int i;
	int len;
	char *ptr_str;
	len = ft_strlen(src) + 1;
	ptr_str = (char *)malloc(sizeof(char) * len);
	if (!ptr_str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr_str[i] = src[i];
		i++;
	}
	ptr_str[i]= '\0';
	return (ptr_str);
}
