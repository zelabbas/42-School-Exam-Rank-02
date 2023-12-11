#include <unistd.h>

void ft_print(char c , int x)
{
	while (x <= c)
	{
		write(1, &c,1);
		x++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				ft_print(argv[1][i], 'a');
				
			}
			else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
					ft_print(argv[1][i], 'A');
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		
	}
	write(1, "\n", 1);
}
