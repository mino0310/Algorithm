#include <stdio.h>

int d[1001][1001] = {0, }, d2[1001][1001] = {0, };

int main(void)
{
	int n, m, k, x1, x2, y1, y2, u, sum=0;

	scanf("%d %d %d", &n, &m, &k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
		d[x1][y1] = d[x1][y1] + u;
		d[x2+1][y2+1] = d[x2+1][y2+1] + u;

		d[x1][y2+1] = d[x1][y2+1] - u;
		d[x2+1][y1] = d[x2+1][y1] - u;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
				
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", d2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
