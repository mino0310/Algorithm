#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> v;

long long m;


long long cut_lan(long long len) {
    
    long long ccnt = 0;
    for (int i = 0; i < v.size(); i++){
        ccnt += v[i] / len;
    }
    return ccnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    long long lt = 1, rt, tmp, len = 0, res, min, max_val = 0;
    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        cin >> tmp;
        if (max_val < tmp) max_val = tmp;
        v.push_back(tmp);
    }
    rt = max_val;

    while (lt <= rt) {
        len = (lt + rt) / 2;
        if (cut_lan(len) >= n) {
            lt = len + 1;
            res =len;
        } else {
            rt = len - 1;
        } 
    }
    cout << res;
}
