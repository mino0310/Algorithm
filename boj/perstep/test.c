#include <stdio.h>

int number = 8;

int size;
int sorted[9]; // 정렬 배열은 반드시 전역 변수로 선언
int count = 0;

void merge(int a[], int m, int middle, int n) 
{
	int i = m;
	int j = middle + 1;
	int k = n;

	while (i <= middle && j <= n)
	{
		if (a[i] <= a[j]) 
		{
			sorted[k] = a[i];
			i++;
		}
		else 
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	if (i > middle)
	{
		for (int t = j; t <= n; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}
	else
	{
		for (int t = i; i <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}

	for (int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}

}

void mergeSort(int a[], int m, int n)
{
	if (m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}

int main(void)
{
	int array[9] = {7, 6, 5, 8, 3, 5, 9, 1};
	mergeSort(array, 0, 7);
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", array[i]);
	}

}
