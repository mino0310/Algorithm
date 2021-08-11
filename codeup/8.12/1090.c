#include <stdio.h>
int main(void)
{
	long long int a, r, n, res;
	scanf("%lld %lld %lld", &a, &r, &n);
	res = a;
	for (int i = 1; i < n; i++)
	{
		res *= r;
	}
	printf("%lld", res);
	return 0;
}
