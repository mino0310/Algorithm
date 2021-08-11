#include <stdio.h>


int main(void)
{
	int n, m, res = 0, arr[102][102];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n * m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= m; k++)
			{
				if (j + k == i+1)
					arr[j][k] = ++res;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
