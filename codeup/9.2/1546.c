#include <stdio.h>
#include <stdbool.h>
int n;

bool zero(int n)
{
	return !n;
}

bool plus(int n)
{
	return n>0;
}

int main(void)
{
	scanf("%d", &n);
	if (zero(n)) printf("zero");
	else if (plus(n)) printf("plus");
	else printf("minus");
	return 0;
}
