#include <stdio.h>
int main(void)
{
	double n, m;
	scanf("%lf %lf", &n, &m);
	for (double i = n; i <= m; i += 0.01)
		printf("%.2lf ", i);
	return 0;
}
