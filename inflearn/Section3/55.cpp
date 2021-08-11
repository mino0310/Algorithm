#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    int i, j, n, num_arr[31] = {0, }, input[31] = {0, };
    vector<char> str;
    stack<int> s;

    cin >> n;
    for (i = 1; i <= n; i++) {
        num_arr[i] = i;
    }
    for (i = 1; i <= n; i++) {
        cin >> input[i];
    }
    i = j = 1;

    while (i <= n) 
    {
        s.push(input[i]);
        str.push_back('P');
        
        while (1) 
        {
            if (s.empty()) break ;
            if (s.top() == num_arr[j])
            {
                s.pop();
                str.push_back('O');
                j++;
            } else {
                break ;
            } 
        }
        i++;
    }
    if (!s.empty()) cout << "impossible\n" << endl;
    else {
        for (i = 0; i < str.size(); i++) {
            cout << str[i];
        }
    } 
    return 0;
}


/* 
문제의 요구사항은 무엇인가?


숫자를 정렬할 수 있느냐를 묻는 것

자료구조는 스택을 사용

정렬에 사용하는 연산은
스택에 넣고, 스택에서 빼내고 
이 두가지밖에 없다.

교차로를 그냥 지나칠 수는 없다.
무조건 들어가야 한다. 

어렵지 않다. 반복문처럼하면 될 것 같은데?


i = 1 부터 시작 ~ n까지 반복 (같은 행위를 계속)

1이 나올 때까지 push 값이 1까지 push, 1도 push
1이 스택의 상단에 올라올 때까지라고 보면 되겠다.
top 이 1이라면 pop, 

*/
