class Solution {
public:

    bool possible(vector<int>& bloomDay, int m, int k, int d)
    {
        int n = bloomDay.size();

        int count = 0;
        int noOfbd = 0;

        for (int i = 0; i < n; i++)
        {
            if (bloomDay[i] <= d)
            {
                count++;
            }
            else
            {
                noOfbd += count / k;
                count = 0;
            }
        }

        noOfbd += count / k;

        return noOfbd >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k)
    {
        int n = bloomDay.size();

        long long val = 1LL * m * k;

        
        if (val > n)
        {
            return -1;
        }

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini;
        int high = maxi;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, m, k, mid))
            {
                
                high = mid - 1;
            }
            else
            {
            
                low = mid + 1;
            }
        }

        return low;
    }
};