class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int left = 0, right = nums.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            // missing numbers before nums[mid] = nums[mid] - (mid + 1)
            if (nums[mid] - (mid + 1) < k) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        // 'left' = count of elements confirmed to be before the missing target
        return left + k;
    }
};