#include <iostream>
#include <vector>s
#include <algorithm>


using namespace std;
int arr[101];

int DFS(int a)
{
    if (arr[a]) {
        return arr[a];
    } else if (a == 1) {
        return arr[1] = 1;
    } else if (a == 2) {
        return arr[2] 
        = 2;
    } else {
        return arr[a] = DFS(a-1) + DFS(a-2);
    }

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << DFS(n) << "\n";

}


