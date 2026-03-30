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

    int i = 0;

    for(int j = 1; j < n; j++)   // start from 1
    {
        if(arr[j] != arr[j - 1])  // compare with previous element
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    cout << "Number of unique elements: " << i + 1 << endl;

    cout << "UNIQUE Elements in the array:"<<endl;
    
    for(int k= 0; k <= i; k++)
    {
        cout << arr[k];
    }

    return 0;
}
