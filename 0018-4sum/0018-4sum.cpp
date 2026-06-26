class Solution {
public:

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        // Step 1: Sort array
        sort(nums.begin(), nums.end());

        // Step 2: First loop for first number
        for (int i = 0; i < n; i++) {
            // Skip duplicates for first number
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // Step 3: Second loop for second number
            for (int j = i + 1; j < n; j++) {
                // Skip duplicates for second number
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                // Step 4: Two pointers for remaining two numbers
                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] +
                                    nums[left] + nums[right];

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j],
                                       nums[left], nums[right]});

                        // Move left pointer skipping duplicates
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        // Move right pointer skipping duplicates
                        while (left < right && nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    }
                    else if (sum < target) left++;
                    else right--;
                }
            }
        }
        return ans;
    }
};