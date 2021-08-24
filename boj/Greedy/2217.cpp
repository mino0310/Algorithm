#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, tmp, res = -1;
    vector<int> v;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++)
    {
        tmp = v[i] * (n - i);
        if (tmp >= res) res = tmp;
    }
    cout << res << endl;
    return 0;
}