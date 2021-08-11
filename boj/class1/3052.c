#include <stdio.h>

int main(void)
{
	int arr[11] ={0, }, cnt = 0, sol[42] = {0, };
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
		sol[arr[i]]++;
	}
	
	for (int i = 0; i < 42; i++)
	{
		if (sol[i] > 0)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
