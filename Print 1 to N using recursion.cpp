#include <iostream>
using namespace std;

int n;
int cnt = 1;

void printcounting() {
    // Base case
    if (cnt > n)
        return;

    cout << cnt << endl;

    cnt++;        // increment from 1 to n
    printcounting();  // recursive call
}

int main() {

    cout << "Enter the value of n: ";
    cin >> n;

    printcounting();

    return 0;
}
