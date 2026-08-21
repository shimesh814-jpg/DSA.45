class Solution {
public:
    int computeSum(vector<int>& nums, int div) {
        int sum = 0;

        for (int x : nums) {
            sum += (x + div - 1) / div;
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (computeSum(nums, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};