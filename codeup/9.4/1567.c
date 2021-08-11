#include <stdio.h>

int n, a, b, d[1010];

long long int subsetsum(int p, int q)
{
	long long int res = 0;
	for (int i = p; i <= q; i++)
	{
		res += d[i];
	}
	return res;
}

int main(void)
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &d[i]);
	}
	scanf("%d %d", &a, &b);

	printf("%lld\n", subsetsum(a, b));
	return 0;
}
