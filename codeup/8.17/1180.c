#include <stdio.h>

int ch_digit(int n)
{
	int tmp1, tmp2;
	tmp1 = (n / 10) % 10;
	tmp2 = n % 10;
	n = (tmp2 * 10 + tmp1) * 2;
	return n;
}

int main(void)
{
	int n, res;
	scanf("%d", &n);
	res = ch_digit(n);
	if (res > 100)
		res = res - 100;
	printf("%d\n", res);
	if (res <= 50)
		printf("%s", "GOOD");
	else
		printf("%s", "OH MY GOD");
	return 0;
}
