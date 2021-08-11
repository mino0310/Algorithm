#include <stdio.h>
int main(void)
{
	int n, x, y,i,j, map[20][20] = {0,};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		map[x][y] = 1;
	}
	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
