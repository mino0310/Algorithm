#include <stdio.h>
int main(void)
{
	double a;
	scanf("%lf", &a);
	if (a >= 50 && a <= 60)
		printf("%s", "win");
	else
		printf("%s", "lose");
	return 0;
}
