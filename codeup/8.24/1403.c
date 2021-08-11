#include <stdio.h>
int main(void)
{
	int n, arr[1001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d\n", arr[i]);
		}
	}
	return 0;
}
