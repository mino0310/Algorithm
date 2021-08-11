#include <stdio.h>
int main(void)
{
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			sum -= i;
			printf("-%d", i);
		}
		else if (i % 2 == 1 && i == a)
		{
			sum += i;
			printf("%d", i);
		}
		else
		{
			sum += i;
			printf("+%d", i);
		}
	}
	printf("=%d", sum);
	return 0;
}
