#include <stdio.h>
#include <stdbool.h>
int n;

bool zero(int n)
{
	return !n;
}

int main(void)
{
	scanf("%d", &n);
	if (zero(n)) printf("zero");
	else printf("non zero");
	return 0;
}
