#include <stdio.h>
int main(void)
{
	int b;
	double a,c,res,ini_a;
	scanf("%lf %d", &a, &b);
	ini_a = a;
	for (int i = 0; i < b; i++)
	{
		scanf("%lf", &c);
		a *=(1 + c * 0.01);
	}
	res = a - ini_a;

	printf("%.0lf\n", res);
	if (res > 0.5 && res < -0.5)
		printf("same");
	if (res > 0)
		printf("good");
	else if (res < 0)
		printf("bad");
	else
		printf("same");
	return 0;
}
