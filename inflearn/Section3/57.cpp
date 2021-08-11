#include <iostream>
#include <vector>
#include <stack>


using namespace std;
stack<int> s;

void digit(int n) 
{
    if (n == 0) {
        return ;
    }
    s.push(n%2);
    digit(n / 2);
    
}

int main(void)
{
    int n;
    cin>>n;
    digit(n);
    while(!s.empty())
    {t
        cout << s.top();
        s.pop();
    }

    return 0;
}