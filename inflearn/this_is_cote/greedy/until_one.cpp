#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n, k, cnt = 0, tmp = 0;

    cin >> n >> k;
    
    while (n != 1) {
        if (!(n % k)) {
            n /= k;
            cnt++;
        }
        else {
            tmp = n % k;
            n -= tmp;
            cnt += tmp;
            // n--;
            // cnt++;
        }
    }

    cout << cnt;
    return 0;
}