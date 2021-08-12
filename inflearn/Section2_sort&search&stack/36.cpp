<<<<<<< HEAD
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int i, j, n, valueToSort;

    scanf("%d", &n);
    std::vector<int> arr(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        j = i;
        valueToSort= arr[j];
        while (--j >= 0 && valueToSort < arr[j]) {
            arr[j + 1] = arr[j];
            arr[j] = valueToSort;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
=======
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

int main(void)
{
    int arr[100], i, j, n, tmp;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        tmp = arr[i];
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > tmp) {
                arr[j+1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = tmp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
>>>>>>> 0660ffe81c90fc22213e1921277a8deb4e2fd1ad
}