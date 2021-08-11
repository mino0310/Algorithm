#include <stdio.h>
int main(void)
{
	int n, i, arr[11];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 5 == 0)
		{
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}
