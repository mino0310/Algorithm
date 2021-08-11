#include <iostream>
using namespace std;
int main() {
    int n, m, i, sum = 0;
    cin >> n >> m;
    for (i = n; i <= m; i++) {
        sum += i;
    }
    cout << sum;
    return 0;
}