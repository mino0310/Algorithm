#include <stdio.h>
int main(void)
{
	int a, b, c, car = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= 170)
		car = a;
	else if (b <= 170)
		car = b;
	else if (c <= 170)
		car = c;
	else if (!car)
		printf("PASS");
	else if (car)
		printf("CRASH %d", car);

	return 0;
}
