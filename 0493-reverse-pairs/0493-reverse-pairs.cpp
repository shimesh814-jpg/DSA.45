class Solution {
public:
    // ✅ STEP 1 — Count pairs across left and right sorted halves
    int countPairs(vector<int>& nums, int low, int mid, int high) {
        int count = 0;
        int right = mid + 1;

        for (int i = low; i <= mid; i++) {
            // Move right pointer while condition satisfies
            while (right <= high && nums[i] > 2LL * nums[right])
                right++;
            // All elements from mid+1 to right-1 form valid pairs with i
            count += (right - (mid + 1));
        }
        return count;
    }

    // ✅ STEP 2 — Merge two sorted halves (your code was correct!)
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }
        while (left <= mid)
            temp.push_back(nums[left++]);
        while (right <= high)
            temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++)
            nums[i] = temp[i - low];
    }

    // ✅ STEP 3 — MergeSort that counts + sorts
    int mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return 0;  // ← returns count now!
        
        int count = 0;
        int mid = (low + high) / 2;

        // Recurse left
        count += mergeSort(nums, low, mid);
        // Recurse right
        count += mergeSort(nums, mid + 1, high);

        // COUNT pairs before merging ← KEY STEP
        count += countPairs(nums, low, mid, high);

        // MERGE after counting
        merge(nums, low, mid, high);

        return count;
    }

    // ✅ STEP 4 — Entry point
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};