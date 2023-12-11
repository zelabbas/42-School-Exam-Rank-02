 unsigned int    lcm(unsigned int a, unsigned int b)
 {
	if (a == 0 || b == 0)
		return (0);
	if (a < b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	unsigned int  n = 1;
	while (1)
	{
		if ((n % a) == 0 && (n % b) == 0)
			return (n);
		n++;
	}
 }
