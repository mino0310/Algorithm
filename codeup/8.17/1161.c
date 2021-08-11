#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 1)
		if (b % 2 == 1)
			printf("홀수+홀수=짝수");
		else
			printf("홀수+짝수=홀수");

	else
		if (b % 2 == 1)
			printf("짝수+홀수=홀수");
		else
			printf("짝수+짝수=짝수");
	return 0;
}
