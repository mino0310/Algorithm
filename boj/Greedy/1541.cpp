#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int res = 0;  
    bool is_minus = false;
    string str;
    string tmp = "";
    cin >> str;
    for (int i = 0; i <= str.size(); i++)
    {
        // 연산자일 경우 or 마지막 
        if (str[i] == '+' || str[i] == '-' || i == str.size()){
            if (is_minus) {
                res -= stoi(tmp);
            }
            else {
                res += stoi(tmp);
            }
            tmp = "";
        }
        // 피 연산자일 경우
        else {
            tmp += str[i];
        }
        if (str[i] == '-') {
            is_minus = true;
        }
    }

    cout << res << endl;
    return 0;
}

// 큰 수를 빼면 된다.
// 큰 수를 빼려면 어떻게 해야 하나?
// 크게 더한다음에 빼면 된다. 
// 빼기가 나올때까지 계속 간다음, 그 뒤에 다음 빼기가 나올 때까지 괄호를 치면 된다.
// 