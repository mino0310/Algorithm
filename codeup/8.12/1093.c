#include <stdio.h>
int main(void)
{
	int n,m,arr[24] = {0, };
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		arr[m]++;
	}
	for (int i = 1; i < 24; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
