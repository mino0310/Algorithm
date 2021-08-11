#include <stdio.h>

int n;

void f(int n)
{
	if (n == 1)
		printf("hello\n");
	else
		printf("world\n");
	return ;
}

int main(void)
{
	scanf("%d", &n);
	f(n);
	return 0;
}

