#include <stdio.h>

int n;

long long int f(int k)
{
	long long int sum = 0;
	for (int i = 1; i <= k; i++)
	{
		sum += i;
	}
	return sum;
}

int main(void)
{
	scanf("%d", &n);
	printf("%lld\n", f(n));
	return 0;
}
