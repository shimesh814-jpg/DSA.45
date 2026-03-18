#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to perform quicksort
    void quickSort(vector<int>& arr, int low, int high) {
        // Base case: if low is not less than high
        if (low < high) {
            // Find pivot index after partitioning
            int pivotIndex = partition(arr, low, high);

            // Recursively sort elements before pivot
            quickSort(arr, low, pivotIndex - 1);

            // Recursively sort elements after pivot
            quickSort(arr, pivotIndex + 1, high);
        }
    }

    // Function to partition the array
    int partition(vector<int>& arr, int low, int high) {
        // Choose the last element as pivot
        int pivot = arr[low];

        // Initialize i to place smaller elements
        int i = low;
        int j = high;

        // Traverse the array
        while(i<j) 
        {
            while (arr[i]<=pivot && i <= high -1 )
            {
                i++;
            }
            while (arr[j]>pivot && j >= low +1 )
            {
                j--;
            }
            if(i<j)
            {
                swap(arr[i],arr[j]);
            }
        }

        // Place pivot in correct position
        swap(arr[low], arr[j]);

        // Return pivot index
        return j;
    }
};

int main() {
    // Sample array
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array :"<<endl;;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Create solution object
    Solution sol;

    // Apply quicksort
    sol.quickSort(arr, 0, arr.size() - 1);

    // Print sorted array
    for (int num : arr)
        cout << num << " ";
    
    return 0;
}