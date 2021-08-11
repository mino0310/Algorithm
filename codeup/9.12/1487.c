#include <stdio.h>
int main(void)
{
	int n,m,i,j,res=0,limit=0,col,row,arr[102][102],plus=1;
	scanf("%d %d", &n, &m);
	res = n * m;
	row = 0; 
	col = m;
	for (;res > 1;)
	{
		for (i = 1; i <= n - limit; i++)
		{
			row += plus;
			arr[row][col] = res--;
		}			
		plus *= -1;
		for (i = 1; i < m - limit; i++)
		{
			col += plus;
			arr[row][col] = res--;
		}
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
