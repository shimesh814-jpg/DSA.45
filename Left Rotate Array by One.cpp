#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array :" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[0];

    for(int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }

    arr[n-1] = temp;

    cout << "After rotating one left array is :" << endl;

    for(int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}