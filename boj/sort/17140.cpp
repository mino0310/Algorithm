#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <queue>
using namespace std;

int arr[101][101];
int memo[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, c, k;
    cin >> r >> c >> k;
    int x = 3, y = 3;
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cin >> arr[i][j];
        }
    }
    
    int cnt = 0;
    while (cnt <= 100) {
        if (arr[r][c] == k) {
            cout << cnt;
            return 0;
        }
        //r연산
        if (x >= y) {
            int maxSize = 0;
            for (int i = 1; i <= x; i++) {
                memset(memo, 0, sizeof(memo));
                vector<pair<int,int> > vp;
                for (int j = 1; j <= y; j++) {
                    memo[arr[i][j]]++;
                }
                for (int j = 1; j <= 100; j++) {
                    if (memo[j] > 0) {
                        vp.push_back(make_pair(memo[j],j));
                    }
                }
                sort(vp.begin(), vp.end());
                vector<int> v;
                for (auto x : vp) {
                    v.push_back(x.second);
                    v.push_back(x.first);
                }

                if (v.size() > maxSize ) {
                    if (v.size() > 100) {
                        maxSize = 100;
                    }
                    else {
                        maxSize = v.size();
                    }
                    int len = maxSize;
                    for (int j = 0; j < len; j++) {
                        arr[i][j + 1] = v[j];
                    }
                    for (int j = len; j < 100; j++) {
                        arr[i][j + 1] = 0;
                    }
                }
                else {
                    int len = v.size();
                    for (int j = 0; j <len; j++) {
                        arr[i][j + 1] = v[j];
                    }
                    for (int j = len; j < 100; j++) {
                        arr[i][j + 1] = 0;
                    }
                }
            }
            y = maxSize;
        }
        //c연산
        else {
            int maxSize = 0;
            for (int i = 1; i <= y; i++) {
                memset(memo, 0, sizeof(memo));
                vector<pair<int, int> > vp;
                for (int j = 1; j <= x; j++) {
                    memo[arr[j][i]]++;
                }
                for (int j = 1; j <= 100; j++) {
                    if (memo[j] > 0) {
                        vp.push_back(make_pair(memo[j],j));
                    }
                }
                sort(vp.begin(), vp.end());
                vector<int> v;
                for (auto x : vp) {
                    v.push_back(x.second);
                    v.push_back(x.first);
                }

                if (v.size() > maxSize) {
                    if (v.size() > 100) {
                        maxSize = 100;
                    }
                    else {
                        maxSize = v.size();
                    }
                    int len = maxSize;
                    for (int j = 0; j < len; j++) {
                        arr[j+1][i] = v[j];
                    }
                    for (int j = len; j < 100; j++) {
                        arr[j + 1][i] = 0;
                    }
                }
                else {
                    int len = v.size();
                    for (int j = 0; j <len; j++) {
                        arr[j + 1][i] = v[j];
                    }
                    for (int j = len; j < 100; j++) {
                        arr[j + 1][i] = 0;
                    }
                }
            }
            x = maxSize;
        }
        cnt++;
    }
    cout << -1;
    return 0;
}