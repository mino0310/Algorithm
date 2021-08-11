#include <stdio.h>
int main(void)
{
	int a,b,c,n, entry;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	for (int i = 0; i < n - 1; i++)
	{
		a = a * b + c;
	}
	printf("%d", a);
	return 0;
}
