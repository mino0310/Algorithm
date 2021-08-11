#include <iostream>
using namespace std;
int main() {
    int n, m, i, sum = 0;
    cin >> n;
    cin >> m;
    for (i = 1; i <= n; i++) {
        if (i % m == 0) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}