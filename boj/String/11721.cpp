#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str, tmp;
    int cnt = 0;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        tmp += str[i];
        cnt++;
        if (cnt == 10){
            cnt = 0;
            cout << tmp << "\n";
            tmp.clear();
        } else if (i == str.size() - 1) {
            cout << tmp << "\n";
        }
    }


    return 0; 
}