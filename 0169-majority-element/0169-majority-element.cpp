class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int candidate = 0;
        int j = 0;
        while(j<n)
        {
            if(count == 0)
            {
                candidate = nums[j];
            }
            if(nums[j] == candidate)
            {
                count++;
            }
            else{
                count--;
            }
            j++;
        }
        return candidate;
    }
};