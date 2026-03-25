#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isSorted = true;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i - 1])
        {
            isSorted = false;
            break;
        }
    }

    if(isSorted)
        cout << "Array is sorted";
    else
        cout << "Array is unsorted";

    return 0;
}