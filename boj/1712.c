#include <stdio.h>
int main(void)
{
	double fixed_cost;
	double varialbe_cost;
	double price;
	int sales = 1;
	double income = 0;
	double total_cost;

	scanf("%lf %lf %lf", &fixed_cost, &varialbe_cost, &price);
	if (price <= varialbe_cost)
	{
		printf("%d", -1);
		return 0;
	}

	sales = (fixed_cost) / (price - varialbe_cost);

	printf("%d", sales+1);

	return 0;
}
