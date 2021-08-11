#include <iostream>
# define MAX_SIZE 8
int sorted[MAX_SIZE];

using namespace std;

// void merge(int list[], int left, int mid, int right)
// {
//     int i, j, k, l;
//     i = left;
//     j = mid + 1;
//     k = left;

//     while (i <= mid && j <= right) {
//         if (list[i] <= list[j])
//             sorted[k++] = list[i++];
//         else
//             sorted[k++] = list[j++];
//     }

//     if (i > mid) {
//         for (l = j; l <= right; l++) {
//             sorted[k++] = list[l];
//         }
//     } else {
//         for (l = i; l <= mid; l++) {
//             sorted[k++] = list[l];
//         }
//     }

//     for (l = left; l <= right; l++) {
//         list[l] = sorted[l];
//     }
// }

void merge(int list[], int start, int mid, int end)
{
    int i, j, k;
    i = start;
    j = mid + 1;
    k = start;

    // 대소 비교하면서 합치기
    while (i <= mid && j <= end) {
        if (list[i] > list[j]) {
            sorted[k++] = list[j++];
        }
        else {
            sorted[k++] = list[i++];
        }
    }
    if (i > mid) {
        while (j <= end) {
            sorted[k++] = list[j++];
        }
    } else {
        while (i <= mid) {
            sorted[k++] = list[i++];
        }
    }
    for (i = start; i <= end; i++) {
        list[i] = sorted[i];
    }
}
void merge_sort(int list[], int left, int right)
{
    int mid;

    if (left < right) {
        mid = (left + right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);
        merge(list, left, mid, right);
    }
}

int main(void)
{
    int i;
    int list[] = {21, 10, 12, 20, 25, 13, 15, 22};  
    int n = sizeof(list) / sizeof(int);
    merge_sort(list, 0, n - 1);

    for (i = 0; i < n; i++) {
        cout << list[i] << " ";
    }
    return 0;
}