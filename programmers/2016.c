#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_first_day(int a)
{
	switch (a)
	{
		case 1:
			return 5;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 5;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 5;
		case 8:
			return 1;
		case 9:
			return 4;
		case 10:
			return 6;
		case 11:
			return 2;
		case 12:
			return 4;
	}
}

int main(void)
{
	int a, b;
	int k = 0;
	int dow;

	scanf("%d %d", &a, &b);
	dow = get_first_day(a); 
	
	enum day_of_week = {sun = 0, mon, tue, wed, thu, fri, sat};

	k = b % 7;

	if (k == dow) 
	printf("%d", );
	return 0;
}
