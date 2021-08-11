#include <stdio.h>

int n;

long long int f(int k)
{
	long long int factorial = 1;
	for (int i = k; i >= 1; i--)
	{
		factorial *= i;
	}
	return factorial;
}

int main(void)
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
	return 0;
}
