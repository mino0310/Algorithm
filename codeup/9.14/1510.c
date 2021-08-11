#include <stdio.h>

int main(void)
{
	int n, arr[51][51] = {0, }, i, j, res = 0, col, row;
	scanf("%d", &n);
	row = 1;
	col = n/2 + 1;
	arr[row][col] = ++res;
	while (res < n * n)
	{
		if (res % n != 0)
		{
			row--;
			col++;
			if (row < 1)
				row = n;
			if (col > n)
				col = 1;
		}
		else if (res % n == 0)
		{
			row++;
			if (row < 1)
				row = n;
		}
		arr[row][col] = ++res;

	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	return 0;
}


