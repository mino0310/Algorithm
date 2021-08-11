#include <stdio.h>
#include <stdlib.h>

void myswap(int *p, int *q)
{
	if (*p > *q)
	{
		int *tmp = malloc(sizeof(int));
		*tmp = *p;
		*p = *q;
		*q = *tmp;

		free(tmp);
	}
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	myswap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
