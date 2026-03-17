#include <bits/stdc++.h>
using namespace std;

// Recursive insertion sort
void insertion_sort(int arr[], int i, int n)
{
    // Base case
    if (i == n)
        return;

    int j = i;

    // Shift element to correct position
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    // Recursive call
    insertion_sort(arr, i + 1, n);
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, 1, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}