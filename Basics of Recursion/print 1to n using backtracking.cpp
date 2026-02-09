#include <iostream>
using namespace std;

void print1toN(int i,int n) {
    if (i<1)   // base case
        return;

    
    print1toN(i-1,n);// recursive call
    cout << i << " ";
}

int main() {
    int n;
    cout<<"enter the value of n:";
    cin >> n;
    print1toN(n,n);
    return 0;
}