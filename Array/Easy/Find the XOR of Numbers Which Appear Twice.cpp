#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int> seen, twice;
        
        // Step 1: Identify duplicates
        for(int num : nums) {
            if(seen.count(num)) {
                twice.insert(num);
            } else {
                seen.insert(num);
            }
        }

        // Step 2: XOR all duplicates
        int xorr = 0;
        for(int num : twice) {
            xorr ^= num;
        }

        return xorr;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.duplicateNumbersXOR(nums);

    cout << "XOR of numbers appearing twice: " << result << endl;

    return 0;
}