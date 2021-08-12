#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
int dy[21][21];

int combination(int n, int r)
{
    if (dy[n][r] > 0) return dy[n][r];
    if (n == r || r == 0) return 1;
    else{
        return dy[n][r] = combination(n-1, r-1) + combination(n-1, r);
    } 
}

int main(void)
{
    int n, r;
    cin >> n >> r;
    cout << combination(n, r) << endl;
    return 0;
}

