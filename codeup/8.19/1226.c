#include <stdio.h>
int main(void)
{
	int bonus_check = 0, arr[8], my_arr[7], i, j, count = 0;
	
	for (i = 0; i < 7; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i< 6; i++)
		scanf("%d", &my_arr[i]);
	
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (arr[i] == my_arr[j])
			{
				count++;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		if (arr[6] == my_arr[i])
			bonus_check = 1;
	}
	if (count == 6)
		printf("1");
	else if (count == 5 && (bonus_check == 1))
		printf("2");
	else if (count == 5)
		printf("3");
	else if (count == 4)
		printf("4");
	else if (count == 3)
		printf("5");
	else
		printf("0");
	return 0;
}
