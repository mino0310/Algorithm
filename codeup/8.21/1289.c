#include <stdio.h>
int main(void)
{
	int a,b,res,arr[4];
	for(int i = 0; i < 3; i++)
	{
		scanf("%d %d", &a, &b);
		res = a * b;
		arr[i] = res;
	}
	printf("%d", (arr[0] > arr[1] ? arr[0] : arr[1]) > arr[2] ? ((arr[0] > arr[1]) ? arr[0] : arr[1]) : arr[2]);
	return 0;
}
