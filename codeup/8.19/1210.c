#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	if (a == 1)
		a = 400;
	else if (a == 2)
		a = 340;
	else if (a == 3)
		a = 170;
	else if (a == 4)
		a = 100;
	else
		a = 70;
	if (b == 1)
		b = 400;
	else if (b == 2)
		b = 340;
	else if (b == 3)
		b = 170;
	else if (b == 4)
		b = 100;
	else
		b = 70;
	printf("%s", a + b > 500 ? "angry" : "no angry");
	return 0;
}
