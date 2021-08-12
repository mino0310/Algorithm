#include <iostream>

using namespace std;

int sorted[101];

void merge(int list[], int start, int mid, int end)
{
    int i, j, k;
    i = start;
    j = mid + 1;
    k = start;

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

void merge_sort(int list[], int start, int end)
{
    int mid;

    if (start >= end) {
        return ;
    }
    else {
        mid = (start + end) / 2;

        merge_sort(list, start, mid);
        merge_sort(list, mid + 1, end);
        merge(list, start, mid, end);
    }
}

int main(void)
{
    int i, j, l, mid, n, input[101];

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    merge_sort(input, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
    
    return 0;
}