class Solution {
public:

    long long maxsum(vector<int>& weights)
    {
        long long sum = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            sum += weights[i];
        }

        return sum;
    }

    int daysreq(vector<int>& weights, long long capacity)
    {
        int days = 1;
        long long load = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            if(load + weights[i] > capacity)
            {
                days++;
                load = weights[i];
            }
            else
            {
                load += weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        long long low = *max_element(weights.begin(), weights.end());
        long long high = maxsum(weights);

        while(low <= high)
        {
            long long mid = low + (high - low) / 2;

            int requiredDays = daysreq(weights, mid);

            if(requiredDays <= days)
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