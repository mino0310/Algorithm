#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int compare(int a, int b)
{
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        v.push_back(str[i] - '0');
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < v.size(); i++)
        cout << v[i];
    return 0;
}