int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
char    *ft_strrev(char *str)
{
	char tmp;
	int i = 0;
	int j = ft_strlen(str) - 1;
	while ( i < j)
	{
		tmp = str[i];
		str[i] = str [j];
		str[j] = tmp;
		j--;
		i++;
	}
	return (str);
}
