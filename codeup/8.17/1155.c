#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 7 == 0)
		printf("%s", "multiple");
	else
		printf("%s", "not multiple");
	return 0;
}
