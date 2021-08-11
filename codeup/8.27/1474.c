#include <stdio.h>
int main(void)
{
	int n,m,i,j,arr[102][102], res = 1;
	scanf("%d %d", &n, &m);
	for (i = m; i >= 1; i--)
	{
		if (i % 2 == 0)
		{
			for (j = n; j >= 1; j--)
			{
				arr[j][i] = res++;
			}
		}
		else if (i % 2 != 0)
		{
			for (j = 1; j <= n; j++)
			{
				arr[j][i] = res++;
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
