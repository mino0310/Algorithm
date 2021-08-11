#include <stdio.h>
int main(void)
{
	int n, m, i, j, arr[102][102], limit = 0, col = 0, row = 1, plus = 1;

	scanf("%d %d", &n, &m);

	int res = n * m;
	
	for (;res > 0;)
	{
		for (i = 1; i <= m - limit; i++)
		{
			col += plus;
			arr[row][col] = res--;
		}

		for (i = 1; i < n - limit; i++)
		{
			row += plus;
			arr[row][col] = res--;
		}

		plus *= -1;
		limit++;
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
