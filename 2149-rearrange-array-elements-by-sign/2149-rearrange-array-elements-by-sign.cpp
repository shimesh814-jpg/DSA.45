class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        int pos = 0;
        int neg = 1;

        int j = 0;

        while(j < n)
        {
            if(nums[j] >= 0)
            {
                ans[pos] = nums[j];
                pos += 2;
            }
            else
            {
                ans[neg] = nums[j];
                neg += 2;
            }

            j++;
        }

        return ans;
    }
};