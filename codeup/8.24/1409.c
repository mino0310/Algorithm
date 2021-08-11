#include <stdio.h>
int main(void)
{
	int arr[11], k, i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &k);
	printf("%d", arr[k - 1]);
	return 0;
}
