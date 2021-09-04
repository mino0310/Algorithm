#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int cnt = 0, i, j, len1, len2, len_sub, res = 51;
    string str1, str2;

    cin >> str1 >> str2;

    len1 = str1.length();
    len2 = str2.length();
    len_sub = abs(len1 - len2);
    
    for (i = 0; i <= len_sub; i++){
        cnt = 0;
        for (j = 0; j < len1; j++){
            if (str2[i + j] != str1[j]){
                cnt++;
            }
        }
        res = min(cnt, res);
    }
    cout << res << endl;
    return 0;
}
