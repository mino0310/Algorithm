#include <stdio.h>

int n, d[100010], k;

int f(int k)
{
	for (int i = 1; i <= n; i++)
	{
		if (k == d[i])
		{
			return i;
		}
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
	printf("%d\n", f(k));
	return 0;
}
