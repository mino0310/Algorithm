#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int total_cnt = 0, odd_cnt = 0;
    string res = "", out = "", odd_string = "";
    map<char, int> m;
    map<char, int>::iterator it;
    char input[51] = {0, };
    char odd_char;

    cin >> input;
    for (int i = 0; input[i]; i++){
        m[input[i]]++;
        total_cnt++;
    }
    for (it = m.begin(); it != m.end(); it++){
        if (it->second % 2 == 1) {
            odd_cnt++;
            if (odd_cnt > 1) {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            odd_char = it->first;
            for (int k = 0; k < it->second / 2; k++) {
                res += it->first;
            }
            continue;
        } else {
            for (int j = 0; j < it->second / 2; j++) {
                res += it->first;
            }
        }
    }
    out = string(res);
    if (odd_cnt == 1) {
        res += odd_char;
    }
    string tp = "";
    reverse(out.begin(), out.end());
    res += out;
    cout << res << endl;
    return 0;
}

