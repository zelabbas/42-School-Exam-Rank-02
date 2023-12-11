#include <unistd.h>

int	ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;
	while (*str && *str == 32 || (*str >= 9 && *str <=13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' &&  *str <= '9'))
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void put_nbr(int x)
{
	if (x >= 10)
	{
		put_nbr(x / 10);
		ft_putchar(x % 10 + 48);
	}
	else
		ft_putchar(x % 10 + 48);
}
int main(int argc , char **argv)
{
	int nbr;
	int i;
	if (argc == 2)
	{
		 nbr = ft_atoi(argv[1]);
		 i = 1;
		 while (i < 10)
		 {
			put_nbr(i);
			write(1, " x ", 3);
			put_nbr(nbr);
			write(1, " = ", 3);
			put_nbr(i * nbr);
			write(1, "\n", 1);
			i++;
		 } 
	}
	else
		write(1, "\n", 1);
}
