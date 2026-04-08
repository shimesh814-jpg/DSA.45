#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-repeating element using XOR
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }
};

int main() {
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array :" << endl;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}
