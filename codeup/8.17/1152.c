#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a < 10)
		printf("%s", "small");
	else
		printf("%s", "big");
	return 0;
}
