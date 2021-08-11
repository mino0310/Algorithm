#include <stdio.h>
int main(void)
{
	int age, year;
	scanf("%d", &age);
	year = 2012 - age + 1;
	if (year >= 2000)
		printf("%d %d", year % 100, 3);
	else
		printf("%d %d", year % 100, 1);
	return 0;
}
