#include <stdio.h>

long long int n;

long long int f(long long int k)
{
	long long int res = k;
	int digit = 0;
	while (res)
	{
		digit++;
		res /= 10;
	}
	while (digit--)
	{
		res = res * 10 + k % 10;
		k /= 10;
	}
	return res;
}

int main(void)
{
	scanf("%lld", &n);
	printf("%lld", f(n));
	return 0;
}

