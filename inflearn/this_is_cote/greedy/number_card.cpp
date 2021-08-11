#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(void)
{
    int n, m, tmp, i, j, res= 0, max_val=0;
    cin >> n >> m;
    vector<int> v;
    
    for (i = 0; i < n; i++) {
        v.clear();
        for (j = 0; j < m; j++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(),  v.end());
        max_val = v[0];
        // if (res < max) res = max;
        res = max(res, max_val);
    }
    cout << res;
    return 0;
}