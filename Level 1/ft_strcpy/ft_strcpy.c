char    *ft_strcpy(char *s1, char *s2)
{
	char *origine;
	origine = s1;
	while (*s2)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return (origine);
}

/*
char    *ft_strcpy(char *s1, char *s2)
{
	return(s2);
}
*/
