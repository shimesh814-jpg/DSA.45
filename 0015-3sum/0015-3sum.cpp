class Solution {
public:
    vector<vector<int>> result;

    void twoSum(vector<int>& nums, int i, int j, int target) {

        while (i < j) {

            int sum = nums[i] + nums[j];

            if (sum > target) {
                j--;
            }
            else if (sum < target) {
                i++;
            }
            else {

                result.push_back({-target, nums[i], nums[j]});

                // Skip duplicates
                while (i < j && nums[i] == nums[i + 1]) i++;
                while (i < j && nums[j] == nums[j - 1]) j--;

                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {

        result.clear();

        int n = nums.size();

        if (n < 3)
            return {};

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int target = -nums[i];

            twoSum(nums, i + 1, n - 1, target);
        }

        return result;
    }
};

        
