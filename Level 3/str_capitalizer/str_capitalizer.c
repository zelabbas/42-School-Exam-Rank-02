#include <unistd.h>
void to_lower(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			to_lower(argv[i]);
			int j = 0;
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] -= 32;
			while (argv[i][j])
			{
				if (argv[i][j - 1] == 32 || argv[i][j - 1] == 9)
				{
					if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
						argv[i][j] -= 32;
				}
				write(1, &argv[i][j], 1);
				j++;
			}
			i++;
			write(1,"\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
