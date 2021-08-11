#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, m, k, tmp, sum = 0, max, sec_max;
    vector<int> vec;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());

    max = vec[n-1];
    sec_max = vec[n-2];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++) {
            sum += max;
            i++;
        }
        if (i < m) sum += sec_max;
    }
    cout << sum << endl;

    return 0;
}