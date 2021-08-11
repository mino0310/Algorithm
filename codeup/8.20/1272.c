#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0)
	{
		a = (a / 2) * 10;
	}
	else
	{
		a = a / 2 + 1;
	}
	if (b % 2 == 0)
	{
		b = (b / 2) * 10;
	}
	else 
	{
		b = b / 2 + 1;
	}
	printf("%d", a + b);
	return 0;
}
