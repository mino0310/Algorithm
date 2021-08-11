#include <stdio.h>

int n;
	
void f(int n)
{
	printf("%s", n==0 ? "zero" : "non zero");
}
int main(void)
{
	scanf("%d", &n);
	f(n);
	return 0;
}
