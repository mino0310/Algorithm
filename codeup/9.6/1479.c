#include <stdio.h>

int main(void)
{
	int n, m, i, j, k, arr[102][102], res = 0;

	scanf("%d %d", &n, &m);

	for (i = -m; i <= n * m; i++)
	{
		for (j = m; j >= 1; j--)
		{
			for (k = 1; k <= n; k++)
			{
				if (k - j == i)
					arr[k][j] = ++res;
			}
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
