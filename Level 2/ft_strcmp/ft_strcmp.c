int    ft_strcmp(char *s1, char *s2)
{
	unsigned char *ptr_s1;
	unsigned char *ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (*ptr_s1 && *ptr_s2)
	{
		if (*ptr_s1 != *ptr_s2)
			return (*ptr_s1 - *ptr_s2);
		ptr_s1++;
		ptr_s2++;
	}
	if (*ptr_s1 || *ptr_s2)
		return (*ptr_s1 - *ptr_s2);
	return (0);
}
