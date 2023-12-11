int ft_search(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	i = 0;
	while (s[i])
	{ 
		if (!ft_search(accept, s[i]))
			break;
		i++;
	}
	return (i);
}
