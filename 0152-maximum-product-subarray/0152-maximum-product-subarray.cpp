class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int result = nums[0];
        int currMax = nums[0];
        int currMin = nums[0];
        
        for (int i = 1; i < n; i++) {
            int num = nums[i];
            
            // if num is negative, max and min swap roles
            if (num < 0) {
                swap(currMax, currMin);
            }
            
            // either extend the previous subarray, or start fresh from num
            currMax = max(num, currMax * num);
            currMin = min(num, currMin * num);
            
            // update global answer
            result = max(result, currMax);
        }
        
        return result;
    }
};