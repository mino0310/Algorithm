#include <stdio.h>
int main(void)
{
	int n,m,i,j,arr[52] = {0, };
	scanf("%d", &n);
	for (int i = 1; i <= n - 1; i++)
	{
		scanf("%d", &m);
		arr[m]++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
			printf("%d", i);
	}
	return 0;
}
