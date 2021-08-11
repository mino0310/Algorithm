#include <stdio.h>
int main(void)
{
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	if (max == a && (b + c > a))
		printf("yes");
	else if (max == b && (a + c > b))
		printf("yes");
	else if (max == c && (a + b > c))
		printf("yes");
	else
		printf("no");
	return 0;
}
