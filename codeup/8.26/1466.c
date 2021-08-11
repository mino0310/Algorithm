#include <stdio.h>
int main(void)
{
	int n,m,i,j,arr[102][102];
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			arr[i][j] = n * m -(i - 1) - n * (j - 1);
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
