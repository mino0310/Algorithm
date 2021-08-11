#include <stdio.h>
int main(void)
{
	int n, arr[33] ={0, }, len = 0, i, j;
	scanf("%d", &n);
	if (n == 0)
		printf("%d", 0);
	for (i = 0; n != 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", arr[j]);
	}

	return 0;
}
