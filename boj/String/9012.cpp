#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<string> v, res;
    stack<string> s;    

    for (int i = 0;  i < n; i++) {
        string tmp;
        cin >> tmp;
        v.push_back(tmp);
        int flag = 1;
        
        for (int j = 0; j < tmp.length(); j++){
            if (tmp[j] == '(') 
                s.push("(");
            else if (tmp[j] == ')') {
                if (!s.empty()){
                    flag = 1;
                    s.pop();
                }
                else {
                    flag = 0;
                    break ;
                }
            }
        }
        if (s.empty() && flag) res.push_back("YES");
        else res.push_back("NO");
        while (!s.empty()) s.pop();
    }

    for (int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;
}

