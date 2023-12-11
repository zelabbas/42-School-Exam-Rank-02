#include <unistd.h>
#include <stdlib.h>
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
void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int is_prime(int x)
{
	int	i;

	i = 2;
	if (x < 2)
		return (0);
	while (i < x)
	{
		if ((x % i) == 0)
			return (0);
		i++;
	}
	return (1);
		
}

int main(int argc, char **argv)
{
	int i;
	int nbr;
	int res;
	if (argc == 2)
	{
		i = 0;
		nbr = ft_atoi(argv[1]);
		if (nbr < 0)
		{
			write(1, "0\n", 2);
			exit(1);
		}
		res = 0;
		while (i <= nbr)
		{
			if (is_prime(i))
				res += i;
			i++;
		}
		put_nbr(res);
		write(1, "\n", 1);
		exit(1);
	}
	write(1, "0\n", 1);
}
