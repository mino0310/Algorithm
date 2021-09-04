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

    string str;
    stack<char> s;
    int bracket = 0;

    getline(cin, str);
    str += ' ';

    for (auto c : str){
        if (c == '<') {
            if (!s.empty()) {
                bracket = 1;
                while (!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << c;
            } else {
                cout << c;
                bracket = 1;
            }
        } else if (c == '>'){
            bracket = 0;
            cout << c;
        } else if (bracket == 1) {
            cout << c;
        } else if (c != ' '){
            s.push(c);
        } else if (c == ' ' || c == '<') {
            while (!s.empty()){
                cout << s.top();
                s.pop();
            }
            cout << c;
        }
    }
    return 0;
}

// 태그가 나오면 그 안의 문자열을 정렬하면 안 됨.
// 태그가 나오면 무시하다가 일반 문자열이 나오면 다시 저장. 그러다가 다음 태그가 나올 때 뒤집음.

// 일반 문자열은 공백이 나오면 정렬해버리면 됨.

// 뒤집는다 - 입력과 출력이 반대다. 이런 목적에 적합한 자료구조는 스택.
