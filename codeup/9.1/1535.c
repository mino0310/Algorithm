#include <stdio.h>

int n, d[110];

int f()
{
	int max = -10000, index;
	for (int i = 0; i < n; i++)
	{
		if (d[i] > max)
		{
			max = d[i];
			index = i;
		}
	}
	return index+1;
}

int main(void)
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &d[i]);
	}
	printf("%d", f());
	return 0;
}
