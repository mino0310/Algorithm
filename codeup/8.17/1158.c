#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if ((a >= 30 && a <= 40) || (a >= 60 && a <= 70))
		printf("%s", "win");
	else
		printf("%s", "lose");
	return 0;
}
