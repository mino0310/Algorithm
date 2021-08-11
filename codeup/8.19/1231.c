#include <stdio.h>
int main(void)
{
	int a, b;
	char c;
	scanf("%d%c%d",&a, &c, &b);

	if (c == '+')
		printf("%d", a + b);
	else if (c == '-')
		printf("%d", a - b);
	else if (c == '*')
		printf("%d", a * b);
	else if (c == '/')
		printf("%.2lf", (double) a / b);
	return 0;
}
