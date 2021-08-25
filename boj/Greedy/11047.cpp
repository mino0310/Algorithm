#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int compare(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, i, tmp, cnt = 0;
    vector<int> v;
    
    cin >> n >> k;

    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compare);
    i = 0;
    while (k)
    {
        cnt = cnt + k / v[i];
        k %= v[i++];
    }
    cout << cnt << endl;

    return 0;
}