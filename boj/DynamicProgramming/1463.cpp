#include <iostream>
#include <algorithm>

using namespace std;

int n, cnt;
int arr[1000001];

int main() {
    
    cin >> n;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i <= n; i++){
        arr[i] = arr[i-1] + 1;
        if (i % 3 == 0) {
            arr[i] = min(arr[i], arr[i/3] + 1);
        } if (i % 2 == 0) {
            arr[i] = min(arr[i], arr[i/2] + 1);
        }
    }
    cout << arr[n] << "\n";
    return 0;
}


// int cnt = 214700000, n;
// int arr[1000001];
// void DFS(int num, int sum){
//     if (num > n) return ;
//     if (num == n) {
//         cnt = min(cnt, sum);
//     } else {
//         DFS(num * 3, sum + 1);
//         DFS(num * 2, sum + 1);
//         DFS(num + 1, sum + 1);
//     }
// }

// int main()
// {
//     cin >> n;
//     DFS(1, 0);
//     cout << cnt << "\n";
//     return 0;
// }



