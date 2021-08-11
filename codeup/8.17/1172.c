#include <stdio.h>
int main(void)
{
	int a, b, c, arr[3];
	scanf("%d %d %d", &a, &b, &c);
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	return 0;
}
