#include <iostream>
using namespace std;
int main()
{
    freopen("input.txt", "rt", stdin);
    int n, m, i, j, max, min, arr[100] = {0, };
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
             if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << (arr[n-1] - arr[0]);
}