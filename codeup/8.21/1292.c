#include <stdio.h>
int main(void)
{
	int n, sum = 0;
	scanf("%d", &n);
	while (n > 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	if (sum % 7 == 4)
		printf("%s", "suspect");
	else
		printf("%s", "citizen");
	return 0;
}
