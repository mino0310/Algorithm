#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>



using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, tmp;
    vector<int> v1, v2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v1.push_back(tmp);
    }
    sort(v1.begin(), v1.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        cout << upper_bound(v1.begin(), v1.end(), tmp) - lower_bound(v1.begin(), v1.end(), tmp) << " ";
    }
}

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n, m, tmp;
//     vector<int> v1, v2;
//     map<int, int> map;

//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> tmp;
//         map[tmp]++;
//     }

//     cin >> m;

//     for (int i = 0; i < m; i++){
//         cin >> tmp;
//         v2.push_back(tmp);
//     }
//     for (int i = 0; i < m; i++){
//         cout << map[v2[i]] << " ";
//     }

//     return 0;   
// }