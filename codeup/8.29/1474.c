#include <stdio.h>
int main(void)
{
	int n,m,i,j,arr[102][102],res=0;
	scanf("%d %d", &n, &m);
	for (i = m; i >= 1; i--)
	{
		if (i == m)
			for (j = n; j >= 1; j--)
				arr[j][i] = ++res;
		else if (arr[j+1][i+1] == res)
			for (j = 1; j <= n; j++)
				arr[j][i] = ++res;
		else if (arr[j-1][i+1] == res)
			for (j = n; j >= 1; j--)
				arr[j][i] = ++res;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}
