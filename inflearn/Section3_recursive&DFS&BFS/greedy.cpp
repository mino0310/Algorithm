#include  <iostream>

using namespace std;

int main(void)
{
    int n, count = 0;
    int arr[5] =  {500, 100,  50, 10 };

    cin >> n;

    for (int i = 0;  i < 4;  i++)
    {
        // count += n;
        // n %= arr[i];
        // count += n / arr[i];
        // n %= arr[i];
    }

    cout <<  count ;
    
    return 0;
}