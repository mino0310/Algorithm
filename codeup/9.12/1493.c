#include <stdio.h>

int arr[102][102], arr2[102][102];

int sarr(int a, int b)
{
	int sum = 0;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int main(void)
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &arr[i][j]);
			arr2[i][j] = arr[i][j];
		}
	}
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			arr2[i][j] = sarr(i,j);
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}


	return 0;
}
