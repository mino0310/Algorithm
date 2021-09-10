#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string tmp;

    cin >> tmp;
    sort(tmp.begin(), tmp.end());

    cout << endl << tmp << endl;
}