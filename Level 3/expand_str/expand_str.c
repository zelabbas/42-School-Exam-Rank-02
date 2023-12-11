#include <unistd.h>
int main(int argc, char **argv)
{
	int i;
	int space;

	if (argc == 2)
	{
		i = 0;
		space = 0;
		while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] == 9))
			i++;
		while (argv[1][i])
		{
			if ((argv[1][i] == 32 || argv[1][i] == 9))
				space = 1;
			if (!(argv[1][i] == 32 || argv[1][i] == 9))
			{
				if (space)
					write(1, "   ", 3);
				space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
