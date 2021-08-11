#include <stdio.h>
int main(void)
{
	int min = 1000001, max = -1000001, n, arr[6];
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	printf("%d\n%d", max, min);
	return 0;
}
