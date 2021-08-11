#include <stdio.h>
int main(void)
{
	long long int n, k, res = 0;
	scanf("%lld %lld", &n, &k);
	if (k == 0)
	{
		printf("1");
		return 0;
	}
	res = n;
	for (int i = 1; i < k; i++)
	{
		res = res * n;
	}
	printf("%lld", res);
	return 0;
}
