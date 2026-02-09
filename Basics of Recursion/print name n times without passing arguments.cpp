#include <iostream>
using namespace std;

int n;
int cnt = 1;
string name;

void printName() {
    // Base case
    if (cnt > n)
        return;

    cout << name << endl;

    cnt++;        // increment from 1 to n
    printName();  // recursive call
}

int main() {
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter number of times: ";
    cin >> n;

    printName();

    return 0;
}
