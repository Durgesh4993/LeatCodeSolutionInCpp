class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2) {
            return false;
        }
        if (k == 0) {
        
            for (int i = 0; i < n - 1; i++) {
                if (nums[i] == 0 && nums[i + 1] == 0) {
                    return true;
                }
            }
            return false;
        }
        vector<int> sum(n, 0);
        sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + nums[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((sum[j] - sum[i] + nums[i]) % k == 0) {
                
                    return true;
                }
            }
        }
        return false;
    }
};
