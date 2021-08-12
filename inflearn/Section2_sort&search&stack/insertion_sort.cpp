#include <stdio.h>

void insertion_sort(int arr[], int n)
{
    int i, j, tmp;

    for (i = 1; i < n; i++) {
        j = i;
        tmp = arr[j];
        while (--j >= 0 && tmp < arr[j])
        {
            arr[j + 1] = arr[j];
            arr[j] = tmp;
        }
    }
}

int main(void)
{
    int arr[10] = {2, 5, 4, 3, 6};
    insertion_sort(arr, 5);
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);

    }
    return 0;
}