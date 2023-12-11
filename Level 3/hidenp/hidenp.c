#include <unistd.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
int main(int argc, char **argv)
{
	int i;
	int j;
	int count;
	if (argc == 3)
	{
		i = 0;
		j = 0;
		count = 0;
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					count++;
					break;
				}
				j++;
			}
			i++;
		}
		if (ft_strlen(argv[1]) == count)
			write(1,"1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
