#include <stdio.h>
int main(void)
{
	int n, num;
	scanf("%d", &n);
	num = 0;
	for (int i = n; i > 0; i--)
	{
		num += i;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", num);
			num -= 1;
		}
		printf("\n");
	}
	return 0;
}
