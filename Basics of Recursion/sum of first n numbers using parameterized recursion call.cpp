#include <iostream>
using namespace std;

void func(int n, int &sum) {    // Here we use pass by reference Because we want all recursive calls to update the same sum variable that lives in main()
    if (n < 1)    // base case
        return;

    sum += n;
    func(n - 1, sum);
}

int main() {
    int n;
    cin >> n;

    int sum = 0;
    func(n, sum);

    cout << sum;
    return 0;
}
