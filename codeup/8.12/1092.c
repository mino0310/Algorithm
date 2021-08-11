#include <stdio.h>
int main(void)
{
	int a,b,c,i;
	scanf("%d %d %d", &a, &b, &c);
	for (i = 1; i % a != 0 || i % b != 0 || i % c != 0; i++)
		;
	printf("%d", i);
	return 0;
}
