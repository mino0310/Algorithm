#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, cnt = 0;
    string tmp;
    map<string, int> map;

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        map[tmp]++;
    }

    for (int j = 0; j < m; j++) {
        cin >> tmp;
        if (map[tmp] > 0) cnt++;
    }

    cout << cnt << endl;

}