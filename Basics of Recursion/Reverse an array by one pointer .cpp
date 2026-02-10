#include <iostream>
#include <algorithm>
using namespace std;

void fun(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    fun(arr, i + 1, n);
}

int main()
{
    int n, arr[10];

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    fun(arr, 0, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

  