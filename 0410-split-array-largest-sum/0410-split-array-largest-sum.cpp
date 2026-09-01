class Solution {
public:
    bool isPossible (vector<int>nums,int k,int mid)
    {
        int n = nums.size();
        int partions = 1;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(sum+nums[i]<=mid)
            {
                sum +=nums[i];
            }
            else{
                partions++;
                if(partions>k||nums[i]>mid){
                    return false;
                }
                sum = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
    if (k > n)
      {
        return -1;
      }

    int low = *max_element(nums.begin(), nums.end());

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    int high = sum;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (isPossible(nums,k, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
    }
};