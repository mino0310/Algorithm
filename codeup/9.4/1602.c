#include <stdio.h>

double ABS(double a)
{
	if (a > 0)
		return a;
	else if (a < 0)
		return -a;
	else
		return 0;
}


int main(void)
{
	double n;
	scanf("%lf", &n);
	if (n == (double)((int)n))
	{
		printf("%d", (int)ABS(n));
	}
	else
	{
		printf("%g", ABS(n));
	}
	
	return 0;
}
