#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b % a == 0)
	{
		printf("%d*%d=%d", a, b / a, b);
	}
	else if (a % b == 0)
	{
		printf("%d*%d=%d", b, a / b, a);
	}
	else
		printf("%s", "none");
	return 0;
}
