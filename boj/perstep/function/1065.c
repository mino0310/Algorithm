#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num[1001] = {0, };


int is_han(int n)
{
	int arr[1001] = {0, }, len = 0, i, j;
	for (i = 0; n ; i++)
	{
		arr[i] = n % 10;		
		n /= 10;
		len++;
	}

	if (len <= 2)
	{
		return 1;
	}

	else if (len == 3)
	{
		if ((arr[1] - arr[2]) == (arr[0] - arr[1]))
			return 1;
		else 
			return 0;
	}
	else
		return 0;
}
int main(void)
{
	int n, cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
			if(is_han(i))
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}
