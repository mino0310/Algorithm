#include <stdio.h>
#include <math.h>
int a, n;

long long int poww(int p, int q)
{
	if (p == 1)
		return 1;
	long long int res = 1;
	for (int i = 0; i < q; i++)
	{
		res *= p;
	}
	return res;
}


int main(void)
{
	scanf("%d%d", &a, &n);
	printf("%lld\n", poww(a,n));
	return 0;
}
