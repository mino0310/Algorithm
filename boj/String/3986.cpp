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
            S.push(input[i]);
        }

        while (!S.empty()) S.pop();
    }

    cout << cnt << endl;
}

// 일단 둘의 호응을 이룬다는 건 나오면 바로 사라진다는 건가.
// 이런 류의 문제는 보통 스택을 많이 사용해서 풀지, 나왔으면 다음에 제거해주면 되니까.
// 스택을 사용해서 풀어보자.
// 일단 다음에 풀자.