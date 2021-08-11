#include <stdio.h>
int main(void)
{
	int a,b,c,d, sum;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a + b + c + d;
	if (sum == 0)
		printf("모");
	else if (sum == 1)
		printf("도");
	else if (sum == 2)
		printf("개");
	else if (sum == 3)
		printf("걸");
	else if (sum == 4)
		printf("윷");

	return 0;
}
