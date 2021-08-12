#include <iostream>
#include <algorithm>

using namespace std;

void minus_one(int n)
{
    if (n == 0) return;
    else {
        
        minus_one(n-1);
        cout << n << " ";
    }
}



int main(void)
{
    int i = 1, n;
    cin >> n;

    minus_one(n);
    
    return 0;
}


/*
재귀함수

*/