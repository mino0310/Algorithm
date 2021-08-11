#include <stdio.h>

int n;
	
void f(int n)
{
	printf("%s", n==0 ? "false" : "true");
}
int main(void)
{
	scanf("%d", &n);
	f(n);
	return 0;
}
