#include <stdio.h>

float circle(int r)
{
	return 3.14f * r * r;
}

int main(void)
{
	int r;
	scanf("%d", &r);
	printf("%.2f", circle(r));
	return 0;
}
