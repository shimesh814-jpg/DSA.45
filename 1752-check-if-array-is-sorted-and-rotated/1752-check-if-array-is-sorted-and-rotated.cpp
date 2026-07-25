class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count=0 ; 
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])  // The code never explicitly checks whether the array is sorted. Instead, it counts how many times the sorted order is broken.
            {
                count++;     
            }
        }
            if(nums[0]<nums[n-1])
            {
                count++;
            }
        return count<=1;
    }
};