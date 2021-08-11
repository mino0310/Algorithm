void buble_sort(int arr[], int arr_num) {
    int i, j, tmp;

    for (i = 0; i < arr_num - 1; i++) {
        for (j = 0; j < arr_num - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

#include <stdio.h>
int main(void)
{
    int arr[10] = {1, 2, 5, 7, 3, 0, 5};

    buble_sort(arr, 7);
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}