#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the union of two arrays using set
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        // Create a set to store unique elements
        set<int> st;

        // Insert elements from first array
        for (int i = 0; i < n; i++) {
            st.insert(arr1[i]);
        }

        // Insert elements from second array
        for (int i = 0; i < m; i++) {
            st.insert(arr2[i]);
        }

        // Convert set to vector
        vector<int> unionArr(st.begin(), st.end());
        return unionArr;
    }
};

int main() {
    int n,m;
    cout<<"Enter the value of n and m:"<<endl;
    cin>>n>>m;

    int arr1[n] ; 
    cout<<"Enter the elements in the array1:"<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>arr1[i];
    }
    int arr2[m] ;
    cout<<"Enter the elements in the array2:"<<endl;
    for(int i=0;i<m;i++)
    {
      cin>>arr2[i];
    }
    

    Solution obj;
    vector<int> result = obj.findUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: ";
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}

