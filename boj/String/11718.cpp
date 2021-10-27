#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n;
    string tmp;

    while (1){
        getline(cin, tmp);
        if (tmp == "") {
            break ;
        }
        cout << tmp << "\n";

    }
    return 0;
}