#include <stdio.h>

int n;
	
void f(int n)
{
	if (n < 0)
		printf("%s", "negative");
	else if (n == 0)
		printf("%s", "zero");
	else
		printf("%s", "positive");
}
int main(void)
{
	scanf("%d", &n);
	f(n);
	return 0;
}
