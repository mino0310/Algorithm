#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, m, flag = 0;
    vector<int> v1, v2;
    
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v1.push_back(tmp);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        v2.push_back(tmp);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < m; i++)
    {
        int j = 0;
        if (binary_search(v1.begin(), v1.end(), v2[i]))
        {
            cout << 1 << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
    return 0;
}