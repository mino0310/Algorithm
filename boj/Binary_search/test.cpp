#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;


int cut_lan(int len) {
    
    int cnt = 0;
    for (int i = 0; i < v.size(); i++){
        cnt += v[i] / len;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, tmp, max = 0, lt = 0, rt, len = 0, res;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    rt = v[n-1];
    while (lt <= rt) {
        len = (lt + rt) / 2;
        if (len <= max && cut_lan(len) >= k) {
            lt = len + 1;
            res = len;
        } else {
            rt = len - 1;
        }
    }

    cout << res << endl;
}