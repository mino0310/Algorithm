#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%s", "even");
	else
		printf("%s", "odd");
	return 0;
}
