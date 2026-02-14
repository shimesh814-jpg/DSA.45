#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash[100] = {0};   // assuming elements are <= 100

    // Count frequency
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int maxFreq = 0;
    int element;

    for(int i = 0; i < 100; i++) {
        if(hash[i] > maxFreq) {
            maxFreq = hash[i];
            element = i;
        }
    }

    cout << "Highest occurring element: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
