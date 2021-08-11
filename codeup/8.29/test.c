#include <stdio.h>
int main(void)
{
	int n,m,i,j, arr[102][102], res=0;
	scanf("%d %d", &n, &m);
	for (i = n; i >= 1; i--)

	{
		if (i % 2 == 0)
		{
			for (j = m; j >= 1; j--)
			{
				arr[i][j] = ++res;
			}
		}
		else if (i % 2 != 0)
		{
			for (j = 1; j <= m; j++)
			{
				arr[i][j] = ++res;
			}
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
