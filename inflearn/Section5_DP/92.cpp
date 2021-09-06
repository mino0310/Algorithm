#include <iostream>
#include <vector>
#include <stack>


using namespace std;

int dy[101];

int DFS(int n){
    if (n == 1 || n == 2) return n;
    else if (dy[n]) return dy[n];
    else {
        return dy[n] = DFS(n - 1) + DFS(n - 2);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;

    cin >> n;
    cout << DFS(n);

}