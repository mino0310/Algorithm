#include <stdio.h>

int myabs(int n)
{
	if (n > 0)
		return n;
	else if (n < 0)
		return -n;
	else
		return 0;
}

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", myabs(a));
	return 0;
}
