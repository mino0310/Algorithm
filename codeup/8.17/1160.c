#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("%s", "enjoy");
	else
		printf("%s", "oh my god");
	return 0;
}
