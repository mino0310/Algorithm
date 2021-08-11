#include <stdio.h>

int a, b;

long long int lcm(int n, int m)
{
	int i = 1, res = 1;
	while(n != 1 && m != 1)
	{
		for (i = 1; 
		if (n % i == 0 && m % i ==0)
		{
			n = n / i;
			m = m / i;
			res *= i;
		}
		i++;
	}
}

int main(void)
{
	scanf("%d %d", &a, &b);
	printf("%lld\n", lcm(a,b));
	return 0;
}
