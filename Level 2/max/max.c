int	max(int* tab, unsigned int len)
{
	int max;
	int i = 0;
	if (len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
