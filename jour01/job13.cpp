#include <iostream>

constexpr int fibonacci(int n){
    int num0 = 0;
    int num1 = 1;
    int num = num0;

    for (int i = 0; i < n; i++){
        num = num0 + num1;
        num1 = num0;
        num0 = num;
    }

    return num;
}

int main() {


    for (int i = 1; i < 11; i++){
        std::cout << fibonacci(i) << std::endl;
    }

    return 0;
}