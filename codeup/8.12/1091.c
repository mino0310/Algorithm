#include <stdio.h>
int main(void)
{
	long long int a, m, d, n, res;
	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
	res = a;
	for (int i = 1; i < n; i++)
	{
		res = m * res + d;
	}
	printf("%lld", res);
	return 0;
}
