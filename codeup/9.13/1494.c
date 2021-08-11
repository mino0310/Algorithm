#include <stdio.h>

int main(void)
{
	int n, k, s, e, u, d[101] = {0, }, d2[101] = {0, }, sum = 0;
	scanf("%d %d", &n, &k);
	
	for (int i = 1; i <= k; i++)
	{
		scanf("%d %d %d", &s, &e, &u);
		d[s] = d[s] + u;
		d[e+1] = d[e+1] - u;
	}

	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		for (int j = 1; j <= i; j++)
		{
			sum += d[j];
		}
		d2[i] = sum;
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", d2[i]);
	}

	return 0;
}
