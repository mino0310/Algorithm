#include <iostream>
#include <stack>
#include <vector>

using namespace std;
void bst(int v)
{
    int node;

    if (v > 7) return ;
    cout << v << " ";
    bst(v * 2);
    bst(v * 2 + 1);
}

int main(void)
{
    bst(1);
    return 0;
}