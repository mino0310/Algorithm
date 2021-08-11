#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, arr[11];
	scanf("%lf %lf", &a, &b);
	arr[0] = a + b;
	arr[1] = b + a;
	arr[2] = a - b;
	arr[3] = b - a;
	arr[4] = a * b;
	arr[5] = b * a;
	arr[6] = a / b;
	arr[7] = b / a;
	arr[8] = pow(b, a);
	arr[9] = pow(a, b);
	int i ,j;
	
	for (int i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			double tmp;
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	printf("%.6lf", arr[10]);

	return 0;
}
