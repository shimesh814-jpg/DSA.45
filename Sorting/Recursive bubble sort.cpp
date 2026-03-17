#include <iostream>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    // Base condition
    if (n == 1)
        return;

    // One pass of bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursive call for remaining array
    recursiveBubbleSort(arr, n - 1);
}

int main()
{
    int arr[100];
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    recursiveBubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}