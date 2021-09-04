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

// 연달아 나오는 단어를 그룹단어라 한다.
// 그룹단어가 아닌 것은 다음과 같다.
// 1) 연달아 나오지 않은 것 -> 고로 앞에 나왔더라도 다른 곳에 뚝 떨어져서 나오면 그룹 단어가 아니다.
// 이를 체크할 수 있어야 한다. 

// 단어가 나오면 일단 그룹단어 조건충족(하나라도 나왔으니까)
// 그 다음에 똑같은 단어가 나와도 조건 충족
// 그 다음에 다른 단어가 나와도 앞의 그 문자는 조건 충족
// 그런데 다른 단어가 나오다가 앞의 그 문자가 또 나오게 되면 조건 성립 안 됨. 

// 문자열의 해당 문자로부터 한칸 앞으로 떨어져서 0 인덱스까지 탐방해서 또 나오면 그것은 그룹단어가 아닌 걸로 보면 되지 않나.
