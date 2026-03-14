#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
for(int i=0;i<=n-1;i++)
{    int j=i; 
    while(j>0 && arr[j-1]>arr[j])
    {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]   = temp ; 
        
           j--;
    }
}
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
In each iteration, select an element from the unsorted part of the array using an outer loop.
Place this selected element in its correct position within the sorted part of the array.
Use an inner loop to shift the remaining elements, if necessary, to accommodate the selected element. This involves shifting elements by one position until the selected element can be placed in the correct position.
Continue this process until the entire array is sorted.
*/