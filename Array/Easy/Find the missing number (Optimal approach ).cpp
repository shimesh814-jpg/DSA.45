#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &arr, int n) {
    int expectedSum = n * (n + 1) / 2;
    
    int actualSum = 0;
    for(int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter " << n - 1 << " elements: ";
    
    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number is: " << findMissing(arr, n);

    return 0;
}