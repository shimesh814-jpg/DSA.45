# include <bits/stdc++.h>
using namespace std;
int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;

    // Iterate from 1 to n and check
    // if the current number is present
    for (int i = 1; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }

        // If the current number is not present
        if (flag==0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1,6}; 
    cout << missingNum(arr) << endl; 
    return 0;
}