#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

char input[31];


int main(void)
{
    stack<char> s;
    int i = 0;

    cin >> input;
    while (input[i]) {
        if (input[i] == '(') s.push(input[i]);
        else {
            if (s.empty()) {
                cout << "NO" << endl;
                return 0;
            }
            s.pop();
        }
        i++;
    }
    if (s.empty()) cout << "YES" << endl;
    else if (!s.empty()) cout << "NO" << endl;
    return 0;
}

// int main(void)
// {
//     stack<char> s_a, s_b;
//     int i = 0, j = 0, cnt_a = 0, cnt_b = 0, end_a = 0, end_b = 0;

//     cin >> input;
    
//     while (input[i]) {
//         if (input[i] == '(') {
//             s_a.push(input[i]);
//             cnt_a++;
//             end_a = 1;
//             end_b = 0;
//         }
//         else {
//             s_b.push(input[i]);
//             cnt_b++;
//             end_a = 0;
//             end_b = 1;
//         }
//         i++;
//     }
//     if (cnt_a == cnt_b) {
//         if (end_a) {
//             cout << "NO" << endl;
//         } else {
//             cout << "YES" << endl;
//         }
//     } else {
//         cout << "NO" << endl;
//     }
    
//     return 0;
// }