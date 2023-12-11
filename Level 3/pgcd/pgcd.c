
#include <stdio.h>
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
unsigned int pgcd(unsigned int a, unsigned int b) {
    while (b)
	{
        unsigned int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int  n1 = ft_atoi(argv[1]);
		unsigned int n2 = ft_atoi(argv[2]);
		unsigned int res = pgcd(n1, n2);
		printf("%u", res);
	}
	printf("\n");
}

// note ! you don't need to make ft_atoi the subject allow it , here is all function :  printf, atoi, malloc, free
