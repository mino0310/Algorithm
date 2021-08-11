#include <stdio.h>

int n, k, d[1010];

int lower_bound(int p)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (d[i] >= p)
			return i;
	}
	return i;
}


int main(void)
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &d[i]);
	}
	scanf("%d", &k);

	printf("%d\n", lower_bound(k));
	return 0;
}
