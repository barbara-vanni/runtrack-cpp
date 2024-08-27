#include <iostream>
using namespace std;

int swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}

int main() {
    int a = 5, b = 10;

    cout << "Avant swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "Apres swap: a = " << a << ", b = " << b << endl;

    return 0;
}