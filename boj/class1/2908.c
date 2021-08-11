#include <stdio.h>

int main(void)
{
	int a, b, rev_a=0, rev_b=0;

	scanf("%d %d", &a, &b);

	for (int i = 0 ; i < 3; i++)
	{
		rev_a = rev_a * 10 + a % 10;
		rev_b = rev_b * 10 + b % 10;
		a /= 10;
		b /= 10;
	}

	printf("%d", rev_a > rev_b ? rev_a : rev_b);

	return 0;
}
