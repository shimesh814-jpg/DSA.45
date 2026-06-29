class Solution {
public:
// 1. sort intervals by start
// 2. create empty result array
// 3. loop through each interval
//    - if result is empty OR no overlap → push current
//    - else → update end of last interval in result
// 4. return result
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> result;

        result.push_back(intervals[0]);
        //result.back() → always gives you the last interval sitting in result.

        for(int i=1; i<n; i++)
        {
            if(intervals[i][0] <= result.back()[1])//  Overlapping
            {
               result.back()[1] = max(result.back()[1] , intervals[i][1]);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};