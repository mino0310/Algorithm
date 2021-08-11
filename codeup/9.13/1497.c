#include <stdio.h>

int main(void)
{
	int n, arr[101] ={0,};
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", arr[i] > arr[i+1] ? arr[i] : arr[i+1]);
		}
	}
	return 0;
}
