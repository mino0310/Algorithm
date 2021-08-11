#include <iostream>
#include <deque>

using namespace std;


deque<int> dq;

int main(void)
{
    dq.push_back(5);
    dq.push_front(3);
    dq.push_back(4);

    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}