#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            }
            else if (nums2[j] < nums1[i]) {
                j++;
            }
            else {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }

        return ans;
    }
};

int main() {
    int n, m;

    // input size of arrays
    cout << "Enter size of nums1: ";
    cin >> n;
    vector<int> nums1(n);

    cout << "Enter elements of nums1: ";
    for(int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    cout << "Enter size of nums2: ";
    cin >> m;
    vector<int> nums2(m);

    cout << "Enter elements of nums2: ";
    for(int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    Solution obj;
    vector<int> result = obj.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}