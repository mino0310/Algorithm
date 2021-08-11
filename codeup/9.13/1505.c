#include <stdio.h>

int main(void)
{
	int n, i, j, arr[51][51] = {0, }, plus = 1, col, row, res = 1, limit = 0;

	scanf("%d", &n);

	col = 0;
	row = 1;
	while(res <= n * n)
	{
		for (i = 1; i <= n - limit; i++)
		{
			col += plus;
			arr[row][col] = res++;
		}

		for (i = 1; i < n - limit; i++)
		{
			row += plus;
			arr[row][col] = res++;
		}
		plus *= -1;
		limit++;
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
