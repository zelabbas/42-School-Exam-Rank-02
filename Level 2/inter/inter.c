#include <unistd.h>
int	check_double(char *str, char c, int pos)
{
	int i;
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (1);
			i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int i;
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			int j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (!check_double(argv[1], argv[1][i], i))
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
