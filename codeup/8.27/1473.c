#include <stdio.h>
int main(void)
{
	int n,m,i,j,arr[102][102];
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			arr[i][j] = (i - 1) * m + j;
		}
	}
	for (i = n; i >= 1; i--)
	{
		if (i % 2 == 1)
		{
			for (j = 1; j <= m; j++)
			{
				printf("%d ", arr[i][j]);
			}
		}
		else if (i % 2 == 0)
		{
			for (j = m; j >= 1; j--)
			{
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
