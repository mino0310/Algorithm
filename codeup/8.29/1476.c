#include <stdio.h>
int main(void)
{
	int n,m,i,j,arr[102][102], res=0, l,k;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		l = i;
		for (j = 1; j <= i; j++,l--)
		{
			arr[l][j] = ++res;
		}
	}
	for (i = 1; i <= n ; i++)
	{
		printf("res= %d\n",res);
		for (j = 1; j <= n - i; j++)
		{
			arr[m-j][m+j] == ++res;
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
