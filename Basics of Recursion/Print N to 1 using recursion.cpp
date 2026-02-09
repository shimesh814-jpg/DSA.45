#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n == 0)   // base case
        return;

    cout << n << " ";
    printNto1(n - 1);   // recursive call
}

int main() {
    int n;
    cout<<"enter the value of n:";
    cin >> n;
    printNto1(n);
    return 0;
}
