#include <stdio.h>

int main(void)
{
	int arr[10] = {0, }, i,idx, max = 0;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
		{
			max = arr[i];
			idx = i;
		}
	}
	printf("%d\n%d", max, idx + 1);
	return 0;
}
