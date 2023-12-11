#include <stdio.h>
#include <stdlib.h>
int	check_separator(char c)
{
	if ( c == 9 || c == 32 || c == 10)
		return (1);
	return (0);
}

static int	count_strings(char const *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_separator(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_separator(str[i]))
			i++;
	}
	return (count);
}

static char	*ft_word(const char **str)
{
	int			len_word;
	int			i;
	const char	*start;
	char		*word;

	len_word = 0;
	start = *str;
	while (**str && !check_separator(**str))
	{
		len_word++;
		(*str)++;
	}
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	*str = start;
	i = 0;
	while (i < len_word)
	{
		word[i] = **str;
		(*str)++;
		i++;
	}
	word[len_word] = '\0';
	return (word);
}

static void	*ft_free_all_split_alloc(char **split, size_t elts)
{
	size_t	i;

	i = 0;
	while (i < elts)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *str)
{
	int		i;
	char	**strings;

	if (!str)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * (count_strings(str) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && check_separator(*str))
			str++;
		if (*str)
		{
			strings[i] = ft_word(&str);
			if (!strings[i])
				return (ft_free_all_split_alloc(strings, i));
			i++;
		}
	}
	strings[i] = 0;
	return (strings);
}
