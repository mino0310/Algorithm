#include <iostream>

int input[101];
using namespace std;

int partition(int list[], int left, int right)
{
    int low, high, i, j, pivot, temp;

    low = left + 1;
    high = right;
    pivot = list[left];

    while (low < high) {
        
        while (low <= right && list[low] < pivot) {
            low++;
        }
        while (high >= left && list[high] > pivot) {
            high--;
        }
        if (low < high) 
        {
            temp = list[low];
            list[low] = list[high];
            list[high] = temp;
        }   
    }
    temp = list[high];
    list[high] = list[left];
    list[left] = temp;
    return high;
}

void q_sort(int list[], int left, int right)
{
    if (left < right) {
        int pivot_idx_idx = partition(list, left, right);

        q_sort(list, left, pivot_idx_idx - 1);
        q_sort(list, pivot_idx_idx + 1, right);
    }
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    q_sort(input, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    return 0;
}