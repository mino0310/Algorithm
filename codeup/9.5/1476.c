#include <stdio.h>


int main(void)
{
	int n, m, i, j, k, res = 0, arr[102][102];
	scanf("%d %d", &n, &m);

	for (i = 1; i <= n * m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			for (k = 1; k <= n; k++)
			{
				if (j + k == i+ 1)
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
