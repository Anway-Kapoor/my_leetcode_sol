class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;
        int len = 0;
        int maxi = 0;
        int zeroes = 0;
        while (r < n) {
            if (nums[r] == 0)
                zeroes++;
            if (zeroes > k) {
                if (nums[l] == 0) {
                    l++;
                    zeroes--;
                } else
                    l++;
            }
            if (zeroes <= k) {
                len = r - l + 1;
                maxi = max(maxi, len);
            }
            r++;
        }
        return maxi;
    }
};