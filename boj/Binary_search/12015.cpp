#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, max_cnt;

    cin >> n;
    vector<int> input(n+1), res;

    for (int i = 1; i <= n; i++) {
        cin >> input[i];
    }
    res.push_back(input[1]);
    
    for (int i = 2; i <= n; i++) {
        tmp = input[i];
        if (tmp > res.back()) {
            res.push_back(tmp);
        } else {
            *lower_bound(res.begin(), res.end(), tmp) = tmp;
        }
    }

    cout << res.size() << "\n";


    return 0;
}


// 일단 dp 로 100만개까지의 최대 길이들을 저장해놓고 이진탐색으로 그 중 최대값을 찾으면 되나
