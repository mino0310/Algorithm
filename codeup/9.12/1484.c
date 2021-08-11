#include <stdio.h>

int main(void)
{
	int i, j, n, m, arr[102][102], row=1, col=0, plus = 1, limit = 1, res = 0;

	scanf("%d %d", &n, &m);

	for (; res < n*m;)
	{
		for (i = 1; i <= m - limit + 1; i++)
		{
			col += plus;
			arr[row][col] = ++res;
		}
		for (i = 1; i <= n - limit; i++)
		{
			row += plus;
			arr[row][col] = ++res;
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
