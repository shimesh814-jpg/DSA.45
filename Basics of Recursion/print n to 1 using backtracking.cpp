#include <iostream>
using namespace std;

void printNto1(int i,int n) {
    if (i>n)   // base case
        return;

    
    printNto1(i+1,n);// recursive call
    cout << i << " ";
}

int main() {
    int n;
    cout<<"enter the value of n:";
    cin >> n;
    printNto1(1,n);
    return 0;
}