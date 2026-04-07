#include <iostream>
using namespace std;

int findSingle(int arr[], int n) {
    // Step 1: Find maximum element
    int maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Step 2: Create hash array
    int hash[maxVal + 1] = {0};

    // Step 3: Count frequency
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Step 4: Find element with frequency 1
    for(int i = 0; i <= maxVal; i++) {
        if(hash[i] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSingle(arr, n);

    cout << "Single element: " << result << endl;

    return 0;
}