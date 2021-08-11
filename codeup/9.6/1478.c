#include <stdio.h>

int main(void)
{
	int n, m, arr[102][102], res = 0, i, j ,k;

	scanf("%d %d", &n, &m);
	
	for (i = m; i <= n*m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= m; k++)
			{
				if (j - k == i)
					arr[j][k] = ++res;
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
