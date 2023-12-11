#include <unistd.h>

void ft_put_char(char c)
{
	write(1, &c, 1);
}
void ft_put_nbr(int n)
{
	if (n >= 10)
	{
		ft_put_nbr(n / 10);
		ft_put_char((n % 10) + 48);
	}
	else
		ft_put_char((n % 10) + 48);
}
int main()
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
			write(1, "fizzbuzz",8);
		else if (((i % 3) == 0))
			write(1,"fizz",4);
		else if ((i % 5) == 0)
			write(1, "buzz", 4);
		else
			ft_put_nbr(i);
		write(1, "\n", 1);
		i++;
	}
	
}
