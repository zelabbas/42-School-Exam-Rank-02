// 1 
int is_power_of_2(unsigned int n) 
{
	return n && ((n & (n - 1)) == 0);
}

// 2 
int is_power_of_2(unsigned int n) 
{
	if ( n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	return ((n == 1) ? 1 : 0);	
}

// chose !