class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;
        int i = 0, j = 0, k = 0, ans = 0;
        while (j < n - 1) {
            ans++;
            k = j;
            for (; i <= k; i++) {
                j = max(j, i + nums[i]);
            }
        }
        return ans;
    }
};
