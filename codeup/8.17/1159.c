#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if ((a >= 50 && a <= 70) || (a % 6 == 0))
		printf("%s", "win");
	else
		printf("%s", "lose");
	return 0;
}
