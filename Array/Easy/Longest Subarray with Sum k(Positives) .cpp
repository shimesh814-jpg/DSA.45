#include <bits/stdc++.h>
using namespace std;

int longestSubarraywithSumk(vector<int> arr, long long k)
{
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLength = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if(sum == k)
        {
            maxLength = max(maxLength, i + 1);
        }

        long long rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLength = max(maxLength, len);
        }

        // store prefix sum (only first occurrence)
        if(preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLength;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long k;
    cout << "Enter value of k: ";
    cin >> k;

    int result = longestSubarraywithSumk(arr, k);

    cout << "Longest subarray length with sum " << k << " is: " << result << endl;

    return 0;
}