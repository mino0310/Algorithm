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


    vector<string> res;
    string str;
    stack<char> s;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin, str);
        str += ' ';   
        for (char c : str){
            if (c == ' '){
                while (!s.empty()){
                    cout <<s.top();
                    s.pop();
                }
                cout << c;
            } else {
                s.push(c);
            }
        str.clear();
        }
    }
    return 0;
}
