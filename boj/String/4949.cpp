#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string input;
    
    int flag = 1;

    while (1){
        getline(cin, input);
        if (input == ".") break ;
        flag = 1;
        stack<int> s;
        for (int i = 0; i < input.size(); i++){
            if (input[i] == '('){
                s.push('(');
            } else if (input[i] == '['){
                s.push('[');
            } else if (input[i] == ')') {
                if(!s.empty() && s.top() == '(') {
                    s.pop();
                } else flag = 0;
            } else if (input[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                } else flag = 0;
            }
        }
        if (s.empty() && flag == 1) cout << "yes" << "\n";
        else cout << "no" << "\n";

    }
}