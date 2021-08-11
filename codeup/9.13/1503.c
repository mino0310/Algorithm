#include <stdio.h>

int main(void)
{
	int n, arr[51][51] = {0, }, res = 0, i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (j = 1; j <= n; j++)
			{
				arr[i][j] = ++res;
			}
		}
		else if (i % 2 == 0)
		{
			for (j = n; j >= 1; j--)
			{
				arr[i][j] = ++res;
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
