#include <stdio.h>
int main(void)
{
	int a, d, n, res;
	scanf("%d %d %d", &a, &d, &n);
	res = a;
	for (int i = 1; i < n; i++)
	{
		res += d;
	}
	printf("%d", res);
	return 0;
}
