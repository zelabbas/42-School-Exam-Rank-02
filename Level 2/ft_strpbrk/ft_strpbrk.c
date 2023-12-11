#include <string.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char *tmp;
	// if (!s1 || !s2)
	// 	return (0);
	while (*s1)
	{
		tmp = s2;
		while (*tmp)
		{
			if (*s1 == *tmp)
				return ((char *)s1);
			tmp++;
		}
		s1++;
	}
	return (NULL);
}
