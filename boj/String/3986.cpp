#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 0, flag = 0;
    string input;
    cin >> n;

    for (int i = 0; i < n; i++){
        stack<char> S;
        cin >> input;
        
        for (int i = 0; i < input.length(); i++) {
            if(S.empty() || S.top() != input[i]){
                S.push(input[i]);
                // cout << "zzz" << endl;
            }
            else if (!S.empty() && S.top() == input[i]){
                S.pop();
            }
        }
        if (S.empty()) cnt++;
        while (!S.empty()) S.pop();
    }
    cout << cnt << endl;
}

