#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int ch[2100];
int main(void)
{
    int n, tmp, i;
    vector<int> v;
    cin >> n;    
    for (i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (ch[tmp + 1000] == 0)
        {
            v.push_back(tmp);
            ch[tmp + 1000] = 1;
        }
    }
    sort(v.begin(), v.end());
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}