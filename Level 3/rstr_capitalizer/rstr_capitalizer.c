#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			int j = 0;
			 while (argv[i][j])
			 {
				if (argv[i][j + 1] == 32 || argv[i][j + 1] == 0 || argv[i][j] == 9)
				{
					if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
						argv[i][j] -= 32;
				}
				else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					argv[i][j] += 32;
				}
				write(1, &argv[i][j], 1);
				j++;
			 }
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
