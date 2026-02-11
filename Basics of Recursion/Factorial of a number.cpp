#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0)          // base case
        return 1;
    return n * fact(n - 1);   // recursive call
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "Factorial of a number is = " << fact(n);
    return 0;
}