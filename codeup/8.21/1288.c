#include <stdio.h>
int factorial(int n)
{
	int res = 1;
	if (n == 1)
		return 1;
	for (int i = n; i > 0; i--)
	{
		res = res * i;
	}
	return res;
}
int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%.0lf", (double)factorial(a) / (factorial(a - b) * factorial(b)));
	return 0;
}
