#include <stdio.h>

int n, m;

int min(int a, int b)
{
	return a <= b ? a : b;
}

int main(void)
{
	scanf("%d %d", &n, &m);
	printf("%d", min(n,m));
	return 0;
}

