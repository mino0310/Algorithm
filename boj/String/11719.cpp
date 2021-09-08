#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int n;
    string tmp;

    // while (1){
    //     getline(cin, tmp);
    //     if (cin.eof() == true){
    //         break ;
    //     }
    //     cout << tmp << "\n";
    // }

    while(getline(cin, tmp)){
        cout << tmp << "\n";
    }
    return 0;
}