#include <stdio.h>
int main(void)
{
	int n, arr[101] = {0, }, arr2[101] = {0, }, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		arr2[i] = arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		for (int j = 1; j <= i; j++)
		{
			sum += arr2[j];
		}
		arr[i] = sum;
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
