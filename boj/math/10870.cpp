#include <iostream>

int fibo(int n);

int main(){
    int input;
    std::cin >> input;

    std::cout << fibo(input) << std::endl;

    return 0;
}

int fibo(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return (fibo(n-1) + fibo(n-2));
}