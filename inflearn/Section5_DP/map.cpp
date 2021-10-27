#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    map<string, int> m;
    map<string, int>::iterator it;

    int n;
    // char a[100] = {0, };
    string a;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (m[a] > 0) cout << "\n이미 존재합니다\n";
        m[a]++;
    }

    // for (int i = 0; a[i] != '\0'; i++) {
    //     m[a[i]]++;
    // }

    // for (auto c : a){
    //     m[c]++;
    // }

    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}