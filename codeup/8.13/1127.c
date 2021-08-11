#include <stdio.h>
int main(void)
{
	int a;
	float b, sum = 0.0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%f %d", &b, &a);
		sum += b * a;
	}
	printf("%.1f", sum);
	return 0;
}
