#include <bits/stdc++.h>
using namespace std;

int Secondlargest(int arr[], int n){
    int largest = arr[0];
    int Slargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest) {
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > Slargest) {
            Slargest = arr[i];
        }
    }
    return Slargest;
}

int main ()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in the array:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sl = Secondlargest(arr,n);
    cout << "Second Largest: " << sl;

    return 0;
}