#include <iostream>
#include <algorithm>
using namespace std;

void fun(int arr[], int l, int r)
{
    if (l >= r)
        return;

    swap(arr[l], arr[r]);
    fun(arr, l + 1, r - 1);
}

int main()
{
    int n, arr[10];

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    fun(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
  