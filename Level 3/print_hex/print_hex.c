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

void print_hex(int  x)
{
	char *l_hex = "0123456789abcdef";
	if (x >= 16)
	{
			print_hex( x / 16);
			ft_putchar(l_hex[x % 16]);
	}
	else
		ft_putchar(l_hex[x % 16]);

}

int main(int argc, char **argv)
{
	int d;
	if (argc == 2)
	{
		d = ft_atoi(argv[1]);
		print_hex(d);
	}
	write(1, "\n", 1);
}
