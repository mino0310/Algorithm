#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	{
		if (b == 2)
			printf("%d", 29);
		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
			printf("%d", 31);
		else
			printf("%d", 30);
	}
	else
	{
		if (b == 2)
			printf("%d", 28);
		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
			printf("%d", 31);
		else
			printf("%d", 30);
	}

	return 0;
}
