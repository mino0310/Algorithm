#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (b - 30 > 0)
		printf("%d %d", a, b - 30);
	else if (b - 30 < 0)
	{
		a--;
		if (a < 0)
			a = 23;
		printf("%d %d", a, 30 + b);
	}
	else
	{
		printf("%d %d", a, 0);
	}
	return 0;
}
