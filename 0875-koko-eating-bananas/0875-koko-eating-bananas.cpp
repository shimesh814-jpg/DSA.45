class Solution {
public:

    long long Totalhours(vector<int>& piles, int h) {
        int n = piles.size();
        long long totalhrs = 0;

        for (int i = 0; i < n; i++) {
            totalhrs += (piles[i] + h - 1) / h;
        }

        return totalhrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long totalhrs = Totalhours(piles, mid);

            if (totalhrs <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};