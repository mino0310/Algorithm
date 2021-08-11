#include <stdio.h>
int main(void)
{
	int year, sex;
	scanf("%d %d", &year, &sex);
	if (sex == 1 || sex == 2)
		printf("%d", 2012 - ((year / 10000) + 1900) + 1);
	else 
		printf("%d", 2012 - ((year / 10000) + 2000) + 1);
	return 0;
}
