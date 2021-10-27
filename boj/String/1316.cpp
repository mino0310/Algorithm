#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int checker(string s)
{
    int i, j, flag = 0;
    int ch[100] = {0, };
    
    i = 0;
    while (i < s.length()){
        char tmp = s[i];
        int idx = tmp - 'a';
        if (ch[idx] == 0){
            ch[idx] = 1;
        } else if (ch[idx] == 1 && s[i] != s[i - 1])
            return 0;
        i++;
        if (i == s.size()) break;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(checker(str)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

