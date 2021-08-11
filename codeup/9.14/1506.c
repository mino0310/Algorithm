#include <stdio.h>

int main(void)
{
	int n, arr[20][20] = {0, }, i, j, res = 0, limit = 0, row, col, plus = 1; 
	scanf("%d", &n);

	row = 0; 
	col = 1;
	while (res < n * n)
	{
		for (i = 1; i <= n - limit; i++)
		{
			row += plus;
			arr[row][col] = ++res;
		}

		for (i = 1; i < n - limit; i++)
		{
			col += plus;
			arr[row][col] = ++res;
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
