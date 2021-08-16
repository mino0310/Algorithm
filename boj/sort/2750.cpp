#include <iostream>

using namespace std;

int sorted[1001], input[1001];

void merge(int list[], int left, int mid, int right)
{
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right) {
        if (list[i] <= list[j]){
            sorted[k++] = list[i++];
        }
        else
            sorted[k++] = list[j++];
    }
    if (i > mid) {
        for (; j <= right; j++)
        {
            sorted[k++] = list[j];
        }
    } else {
        for (; i <= mid; i++)
        {
            sorted[k++] = list[i];
        }
    }
    for (l = left; l <= right; l++)
    {
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int left, int right)
{
    int mid;

    if (left >= right) {
        return ;
    }
    else
    {
        mid = (left + right) / 2;
        
        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);
        merge(list, left, mid, right);
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
    merge_sort(input, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }

    return 0;
}