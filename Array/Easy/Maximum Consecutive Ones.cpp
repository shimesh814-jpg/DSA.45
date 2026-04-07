#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
                maxi = max(maxi, count);
            } 
            else {
                count = 0;
            }
        }

        return maxi;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0s and 1s only): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive 1s: " << result << endl;

    return 0;
}