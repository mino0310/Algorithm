#include <stdio.h>

int n, k, d[1010];

int findi(int p)
{
	for (int i = 1; i <= n; i++)
	{
		if (d[i] == p)
			return i;
	}
	return -1;
}


int main(void)
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &d[i]);
	}
	scanf("%d", &k);

	printf("%d\n", findi(k));
	return 0;
}
