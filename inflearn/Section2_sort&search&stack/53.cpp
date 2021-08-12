#include <iostream>
#include <stack>

using namespace std;

int main(){

    int n, k, i, rem, lim;
    cin >> n >> k;

    stack<int> s;
    
    while (n) {
        rem = n % k;
        s.push(rem);
        n /= k;
    }
    while(!s.empty()) {
        cout << "0123456789abcdef"[s.top()];
        s.pop();
    }
	return 0; 
}