#include <stdio.h>

long long int n;

long long int ff(long long int n)
{
	long long int i;
	if (n == 0)
		return 0;

	for (i = 1; i * i <= n ; i++)
	{
		if (i * i == n)
			return i;
	}
	return --i;
}

int main(void)
{
	scanf("%lld", &n);
	printf("%lld\n", ff(n));
	return 0;
}
