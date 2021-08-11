#include <stdio.h>

int n, m;

int max(int a, int b)
{
	return a >= b ? a : b;
}

int main(void)
{
	scanf("%d %d", &n, &m);
	printf("%d", max(n,m));
	return 0;
}

