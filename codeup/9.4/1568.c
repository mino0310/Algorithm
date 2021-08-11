#include <stdio.h>

int n, a, b, d[1010];

int maxi(int p, int q)
{
	int max = -2147483648;
	int index;
	for (int i = p; i <= q; i++)
	{
		if (d[i] > max)
		{
			max = d[i];
			index = i;
		}
	}
	return index;
}


int main(void)
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &d[i]);
	}
	scanf("%d %d", &a, &b);

	printf("%d\n", maxi(a, b));
	return 0;
}
