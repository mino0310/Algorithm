#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {


    int n, m;
    set<string> set;
    cin >> n;
    for (int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        set.insert(tmp);
    }
    std::set<string>::iterator it;
    for (it = set.begin(); it != set.end(); it++) {
        cout << *it << endl;
    }
}