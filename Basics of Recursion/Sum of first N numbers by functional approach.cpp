#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)          // base case
        return 0;
    return n + sum(n - 1);   // recursive call
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "Sum = " << sum(n);
    return 0;
}
