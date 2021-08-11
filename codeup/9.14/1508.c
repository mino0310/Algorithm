#include <stdio.h>

int main(void)
{
	int n, arr[21][21] = {0, };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i][1]);
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			arr[i][j] = arr[i][j-1] - arr[i-1][j-1];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
