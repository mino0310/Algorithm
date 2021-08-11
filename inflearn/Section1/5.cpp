#include <iostream>
using namespace std;
int main(void){
    char input[15] = {0, };
    int arr1[15] = {0, };
    int i, age;
    char sex;

    cin >> input;
    for (i = 0; i < 14; i++)
    {
        arr1[i] = input[i] - '0';
    }

    if (arr1[7] == 1 || arr1[7] == 2) {
        age = 119 - (arr1[0] * 10 + arr1[1]) + 1;
    }
    else if (arr1[7] == 3 || arr1[7] == 4) {
        age = 19 - (arr1[0] * 10 + arr1[1]) + 1;
    }

    if (arr1[7] == 1 || arr1[7] == 3) {
        sex = 'M';
    }
    else
    {
        sex = 'W';
    }
    cout << age << " " << sex;

    return 0;
}