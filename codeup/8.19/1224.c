#include <stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((double) a / b > (double) c / d)
		printf("%c", '>');
	else if ((double) a / b < (double) c / d)
		printf("%c", '<');
	else
		printf("%c", '=');
	return 0;
}
