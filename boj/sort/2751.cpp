#include <iostream>

using namespace std;

int sorted[1000001], input[1000001];

void merge(int left, int mid, int right)
{
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right) {
        if (input[i] <= input[j]){
            sorted[k++] = input[i++];
        }
        else
            sorted[k++] = input[j++];
    }
    if (i > mid) {
        for (; j <= right; j++)
        {
            sorted[k++] = input[j];
        }
    } else {
        for (; i <= mid; i++)
        {
            sorted[k++] = input[i];
        }
    }
    for (l = left; l <= right; l++)
    {
        input[l] = sorted[l];
    }
}

void merge_sort(int left, int right)
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;
        
        merge_sort(left, mid);
        merge_sort(mid + 1, right);
        merge(left, mid, right);
    }
}



int main(void)
{
    int n, i;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    merge_sort(0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << input[i] << "\n";
    }

    return 0;
}